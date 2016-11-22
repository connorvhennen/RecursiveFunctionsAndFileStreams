/** @file InputFile.hpp
@brief Declares InputFile class
@author Connor Hennen
@date Nov 2, 2016
*/


#ifndef InputFile_hpp
#define InputFile_hpp

#include <iostream>
#include <fstream>
#include <string>


/** @class InputFile
 
 @brief encapsulates std::ifstream object to read data in from a file.
 
 */

class InputFile{
    friend InputFile& operator>>(InputFile& filestream,int a);
    friend InputFile& operator>>(InputFile& filestream, std::string a);
    
public:
    InputFile(const std::string& file);
    ~InputFile();
    
    
private:
    std::ifstream input_stream;
};

#endif /* InputFile_hpp */
