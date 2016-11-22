/** @file main.cpp
 @brief Creates output files of partition, stirling1, and stirling2 functions using user input 
 @author Connor Hennen
 @date Nov 2, 2016
 */

#include "InputFile.hpp"
#include "OutputFile.hpp"
#include "stirling2.hpp"
#include "stirling1.hpp"
#include "partition.hpp"
#include "factorial.hpp"
#include <iostream>
#include <fstream>


/** Main routine **/

int main()
{
    
    int inputNumber; // create int object to be initialized with user input
    std::cout << "Welcome!  Please input a number m: "; // prompt user for input number
    std::cin >> inputNumber; // stores user input
	int input(inputNumber);

  // Partition.text file creation
    std::cout << std::endl;
    std::cout << "Creating Partition.txt file ... "; 
    OutputFile partitionFile("Partition.txt"); // create and write to Partititon.txt file using OutputFile object
    
    for(int i = 0; i < inputNumber; ++i) // loop to get function return values for all possible inputs
    {
        for(int j = 0; j < input; ++j)
        {
			int partitionInt = partition(i + 1, j + 1);
            partitionFile << partitionInt << " ";
        }
        partitionFile << "\n"; // new line 
    }
    std::cout << "Done.";
    
    
    // Stirling1.text file creation
    std::cout << std::endl;
    std::cout << "Creating Stirling1.txt file ... ";
    OutputFile stirling1File("Stirling1.txt"); // create Stirling1.txt file
    
    for(int i = 0; i < input; ++i) // loop to get function return values for all possible inputs
    {
        for(int j = 0; j < input; ++j)
        {
			stirling1File << stirling1(i + 1, j + 1) << " ";
        }
        stirling1File << "\n" ;
    }
    std::cout << "Done.";
    
   
   // Stirling2.text file creation
    std::cout << std::endl;
    std::cout << "Creating Stirling2.txt file ... "; // create Stirling2.txt file
    OutputFile stirling2File("Stirling2.txt");
    
    for(int i = 0; i < input; ++i) // loop to get function return values for all possible inputs
    {
        for(int j = 0; j < input; ++j)
        {
			stirling2File << stirling2(i + 1, j + 1) << " ";
            
        }
        stirling2File << "\n" ;
    }
    std::cout << "Done.";
    
    // Factorials.text file creation
    std::cout << std::endl;
    std::cout << "Creating Factorials.txt file ... ";
    OutputFile factorialsFile("Factorials.txt"); // create Factorials.txt file
    
    for(int i = 0; i < input; ++i) // // loop to get function return values for all possible inputs
    {
		factorialsFile << factorial(i + 1) << "\n";
    }
    std::cout << "Done." << std::endl;
    
    
    std::cout << std::endl;
    return 0;
}
