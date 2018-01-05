/**
 * @file include/fileformat/types/export_table/export_table.h
 * @brief Class for export table.
 * @copyright (c) 2017 Avast Software, licensed under the MIT license
 */

#ifndef FILEFORMAT_TYPES_EXPORT_TABLE_EXPORT_TABLE_H
#define FILEFORMAT_TYPES_EXPORT_TABLE_EXPORT_TABLE_H

#include <vector>

#include "fileformat/types/export_table/export.h"

namespace fileformat {

/**
 * Table of exports
 */
class ExportTable
{
	private:
		using exportsIterator = std::vector<Export>::const_iterator;
		std::vector<Export> exports; ///< stored exports
	public:
		ExportTable();
		~ExportTable();

		/// @name Getters
		/// @{
		std::size_t getNumberOfExports() const;
		const Export* getExport(std::size_t exportIndex) const;
		const Export* getExport(const std::string &name) const;
		const Export* getExportOnAddress(unsigned long long address) const;
		/// @}

		/// @name Iterators
		/// @{
		exportsIterator begin() const;
		exportsIterator end() const;
		/// @}

		/// @name Other methods
		/// @{
		void clear();
		void addExport(Export &newExport);
		bool hasExports() const;
		bool hasExport(const std::string &name) const;
		bool hasExport(unsigned long long address) const;
		bool empty() const;
		void dump(std::string &dumpTable) const;
		/// @}
};

} // namespace fileformat

#endif
