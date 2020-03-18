/**
 * @file src/fileinfo/file_presentation/getters/iterative_getter/iterative_subtitle_getter/typeref_table_json_getter.cpp
 * @brief Methods of TypeRefTableJsonGetter class.
 * @copyright (c) 2017 Avast Software, licensed under the MIT license
 */

#include "retdec/utils/conversion.h"
#include "retdec/utils/string.h"
#include "retdec/fileformat/utils/conversions.h"
#include "fileinfo/file_presentation/getters/iterative_getter/iterative_subtitle_getter/typeref_table_json_getter.h"

using namespace retdec::utils;
using namespace retdec::fileformat;

namespace fileinfo {

/**
 * Constructor
 * @param fileInfo Information about file
 */
TypeRefTableJsonGetter::TypeRefTableJsonGetter(FileInformation &fileInfo) : IterativeSubtitleGetter(fileInfo)
{
	numberOfStructures = 1;
	numberOfStoredRecords.push_back(fileinfo.getNumberOfStoredDotnetImportedClasses());
	numberOfExtraElements.push_back(0);
	title = "typeRefTable";
	subtitle = "types";
	commonHeaderElements.push_back("index");
	commonHeaderElements.push_back("name");
	commonHeaderElements.push_back("nameSpace");
	commonHeaderElements.push_back("libraryName");
}

std::size_t TypeRefTableJsonGetter::getBasicInfo(std::size_t structIndex, std::vector<std::string> &desc, std::vector<std::string> &info) const
{
	if(structIndex >= numberOfStructures || !fileinfo.hasDotnetTypeRefTableRecords())
	{
		return 0;
	}

	desc.clear();
	info.clear();

	desc.push_back("numberOfTypes");
	desc.push_back("crc32");
	desc.push_back("md5");
	desc.push_back("sha256");
	info.push_back(numToStr(fileinfo.getNumberOfStoredDotnetImportedClasses()));
	info.push_back(fileinfo.getDotnetTypeRefhashCrc32());
	info.push_back(fileinfo.getDotnetTypeRefhashMd5());
	info.push_back(fileinfo.getDotnetTypeRefhashSha256());

	return info.size();
}

bool TypeRefTableJsonGetter::getRecord(std::size_t structIndex, std::size_t recIndex, std::vector<std::string> &record) const
{
	if(structIndex >= numberOfStructures || recIndex >= numberOfStoredRecords[structIndex])
	{
		return false;
	}

	record.clear();
	record.push_back(numToStr(recIndex));
	record.push_back(replaceNonprintableChars(fileinfo.getDotnetImportedClassNestedName(recIndex)));
	record.push_back(replaceNonprintableChars(fileinfo.getDotnetImportedClassNameSpace(recIndex)));
	record.push_back(replaceNonprintableChars(fileinfo.getDotnetImportedClassLibName(recIndex)));

	return true;
}

bool TypeRefTableJsonGetter::getFlags(std::size_t structIndex, std::size_t recIndex, std::string &flagsValue, std::vector<std::string> &desc) const
{
	if(structIndex >= numberOfStructures || recIndex >= numberOfStoredRecords[structIndex])
	{
		return false;
	}

	flagsValue.clear();
	desc.clear();

	return true;
}

} // namespace fileinfo
