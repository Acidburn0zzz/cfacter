#ifndef FACTER_UTIL_FILE_HPP_
#define FACTER_UTIL_FILE_HPP_

#include <string>
#include <stdexcept>

namespace facter { namespace util { namespace file {

    /**
     * Reads the entire contents of the given file into a string.
     * @param path The path of the file to read.
     * @return Returns the file contents as a string.
     */
    std::string read(std::string const& path);

    /**
     * Reads the entire contents of the given file into a string.
     * @param path The path of the file to read.
     * @param contents The returned file contents.
     * @return Returns true if the contents were read or false if the file is not readable.
     */
    bool read(std::string const& path, std::string& contents);

    /**
     * Reads the first line of the given file into a string.
     * @param path The path of the file to read.
     * @return Returns the first line of the file.
     */
    std::string read_first_line(std::string const& path);

    /**
     * Reads the first line of the given file into a string.
     * @param path The path of the file to read.
     * @param line The returned first line of the file.
     * @return Returns true if the line was read or false if the file is not readable.
     */
    bool read_first_line(std::string const& path, std::string& line);

}}}  // namespace facter::util::file

#endif  // FACTER_UTIL_FILE_HPP_
