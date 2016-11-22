/** @file OutputFile.cpp
@brief Implements OutputFileClass
@author Connor Hennen
@date Nov 2, 2016
*/

#include "OutputFile.hpp"


/** Overloaded << operator
 @brief writes an int to private member std::ofstream of OutputFile object
 
 @param fileOut			OutputFile reference
 @param a				int object to be fed to stream
 
 @returns				Reference (for chaining) to modified OutputFile object
 */
OutputFile& operator<<(OutputFile& fileOut, const int& a)
{
    fileOut.output_stream << a;
    return fileOut;
}

/** Overloade << operator
 @brief writes a string object to private member std::ofstream of OutputFile object
 
 @param fileOut              Reference to OutputFile
 @param a					string object to be fed to stream
 
 @returns					Reference (for chaining) to modified Outputfile object
 */
OutputFile& operator<<(OutputFile& fileOut, const std::string& a)
{
    fileOut.output_stream << a;
    return fileOut;
}

/** OutputFile class constructor
 @param filename file to be opened
 */
OutputFile::OutputFile(const std::string& filename) : output_stream(filename)
{}

/** OutputFile class deconstructor
	Automatically closes file that was opened in constructor
 */
OutputFile::~OutputFile()
{
    output_stream.close();
}
