/**
 * @file include/fileformat/utils/file_io.h
 * @brief Functions for file I/O.
 * @copyright (c) 2017 Avast Software, licensed under the MIT license
 */

#ifndef FILEFORMAT_UTILS_FILE_IO_H
#define FILEFORMAT_UTILS_FILE_IO_H

#include <sstream>
#include <string>
#include <vector>

namespace fileformat {

bool readHexString(std::istream &fileStream, std::string &hexa, std::size_t start = 0, std::size_t desiredSize = 0);
bool readPlainString(std::istream &fileStream, std::string &plain, std::size_t start = 0, std::size_t desiredSize = 0);

} // namespace fileformat

#endif
