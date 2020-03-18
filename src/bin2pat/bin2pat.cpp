/**
 * @file src/bin2pat/bin2pat.cpp
 * @brief Binary pattern generator.
 * @copyright (c) 2017 Avast Software, licensed under the MIT license
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <ostream>
#include <vector>

#include "retdec/utils/filesystem_path.h"
#include "retdec/patterngen/pattern_extractor/pattern_extractor.h"
#include "yaramod/yaramod.h"

/**
 * Tool for generation of patterns in yara format.
 *
 * Format description:
 * Output is set of yara rules (http://yara.readthedocs.io/en/v3.5.0/).
 */

using namespace retdec::utils;
using namespace retdec::patterngen;

void printUsage(
	std::ostream &outputStream)
{
	outputStream << "Usage: bin2pat [-o OUTPUT_FILE] [-n NOTE]"
		<< " <INPUT_FILE [INPUT_FILE...] | -l LIST_FILE>\n\n"
		<< "-o --output OUTPUT_FILE\n"
		<< "    Output file path (if not given, stdout is used).\n"
		<< "    If multiple paths are given, only last one is used.\n\n"
		<< "-n --note NOTE\n"
		<< "    Optional note that will be added to all rules.\n"
		<< "    If multiple notes are given, only last one is used.\n\n"
		<< "-l --list LIST_FILE\n"
		<< "    Optionally pass the list of input files as a text file.\n"
		<< "    This is useful for a large number of input files.\n\n";
}

void printErrorAndDie(
	const std::string &message)
{
	std::cerr << "Error: " << message << ".\n";
	printUsage(std::cerr);
	std::exit(1);
}

void needValue(
	const std::string &arg)
{
	printErrorAndDie("argument " + arg + " requires value");
}

void processArgs(
	const std::vector<std::string> &args)
{
	std::string note;
	std::string outPath;
	std::vector<std::string> inPaths;

	for (std::size_t i = 0, e = args.size(); i < e; ++i) {
		if (args[i] == "--help" || args[i] == "-h") {
			printUsage(std::cout);
			return;
		}
		else if (args[i] == "-o" || args[i] == "--output") {
			if (i + 1 < e) {
				outPath = args[++i];
			}
			else {
				needValue(args[i]);
				return;
			}
		}
		else if (args[i] == "-n" || args[i] == "--note") {
			if (i + 1 < e) {
				note = args[++i];
			}
			else {
				needValue(args[i]);
				return;
			}
		}
		else if (args[i] == "-l" || args[i] == "--list") {
			// Ensure -l --list is not the last thing in args
			if (&args[i] == &args.back()) {
				printErrorAndDie("input file missing");
				return;
			}

			std::ifstream inputObjects(args[++i]);
			std::string object;

			if (!inputObjects) {
				printErrorAndDie("LIST_FILE '" + args[i]
					+ "' is not a valid file");
				return;
			}
			// Read LIST_FILE until EOF
			while (std::getline(inputObjects, object)) {
				// Ensure file exists before proceeding
				if(!FilesystemPath(object).isFile()) {
					printErrorAndDie("argument '" + args[i]
						+ "' contains the filename '" + object
						+ "' which is not a valid file");
					return;
				}
				else {
					inPaths.push_back(object);
				}
			}
		}
		else {
			// Input file. Check file on system level.
			if(!FilesystemPath(args[i]).isFile()) {
				printErrorAndDie("argument '" + args[i]
					+ "' is neither valid file nor argument");
				return;
			}
			else {
				inPaths.push_back(args[i]);
			}
		}
	}

	if (inPaths.empty()) {
		printErrorAndDie("input files missing");
		return;
	}

	// Prepare builder.
	yaramod::YaraFileBuilder builder;

	// Process files.
	unsigned index = 0;
	bool atLeastOne = false;
	for (const auto &path : inPaths) {
		PatternExtractor extractor(path, "file_" + std::to_string(index++));

		// Add rules if valid.
		if (!extractor.isValid()) {
			// Sometimes, non-supported files are present in archives. We will
			// only print warning if such a file is encountered.
			std::cerr << "Error: file '" << path << "' was not processed.\n";
			std::cerr << "Problem: " << extractor.getErrorMessage() << ".\n\n";
			continue;
		}
		else {
			atLeastOne = true;
			extractor.addRulesToBuilder(builder, note);

			// Print warnings if any.
			const auto &warnings = extractor.getWarnings();
			if (!warnings.empty()) {
				std::cerr << "Warning: problems with file '" << path << "'\n";
				for (const auto &warning : warnings) {
					std::cerr << "Problem: " << warning << ".\n";
				}
				std::cerr << "\n";
			}
		}
	}

	// Check processing results.
	if (!atLeastOne) {
		printErrorAndDie("no valid files were processed");
		return;
	}

	// Print results.
	if (!outPath.empty()) {
		std::ofstream outputFile(outPath);
		if (!outputFile) {
			printErrorAndDie("could not open output file");
			return;
		}
		outputFile << builder.get(false)->getText() << "\n";
	}
	else {
		std::cout << builder.get(false)->getText() << "\n";
	}
}

int main(int argc, char *argv[])
{
	std::vector<std::string> args(argv + 1, argv + argc);
	processArgs(args);
	return 0;
}
