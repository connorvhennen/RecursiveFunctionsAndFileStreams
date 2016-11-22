/** @file OutputFile.hpp
@brief Declares OutputFile class
@author Connor Hennen
@date Nov 2, 2016
*/

#ifndef OutputFile_hpp
#define OutputFile_hpp

#include <iostream>
#include <fstream>
#include <string>

/** @class OutputFile
 
 @brief encapsulates std::ofstream object to write data to a file.
 */

class OutputFile{
    friend OutputFile& operator<<(OutputFile& fileOut, const int& a);
    friend OutputFile& operator<<(OutputFile& fileOut, const std::string& a);
    
public:
    OutputFile(const std::string& filename);
    ~OutputFile();
    
    
private:
    std::ofstream output_stream;
};


#endif /* Input_hpp */
