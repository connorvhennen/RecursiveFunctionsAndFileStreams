/** @file InputFile.cpp
@brief Implements InputFileClass
@author Connor Hennen
@date Nov 2, 2016
*/

#include "InputFile.hpp"

/** Overloaded >> operator
@brief reads an input file

@param fileIn			InputFile reference
@param a				int object to take values from inputFile

@returns				Reference (for chaining) to modified inputFile object
*/
InputFile& operator>>(InputFile& fileIn, int a)
{
    fileIn.input_stream >> a;
    return fileIn;
}

/** Overloaded >> operator
@brief reads an input file

@param fileIn			InputFile reference
@param a				string object to take values from inputFile

@returns				Reference (for chaining) to modified inputFile object
*/
InputFile& operator>>(InputFile& fileIn, std::string a)
{
    fileIn.input_stream >> a;
    return fileIn;
}

/** Tests if InputFile was opened successfully
*/
InputFile::InputFile(const std::string& fileName): input_stream(fileName)
{
    if(input_stream.fail())
    {
        std::cout << "Error opening file!" << std::endl;
    }
}

/** InputFile class deconstructor
Automatically closes file that was opened in constructor
*/
InputFile::~InputFile()
{
    input_stream.close();
}
