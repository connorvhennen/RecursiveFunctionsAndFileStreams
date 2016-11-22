/** @file partition.cpp
 @brief Declares partition recursion function that will appear in the main routine
 @author Connor Hennen
 @date Nov 2, 2016
 */


#ifndef partition_hpp
#define partition_hpp

/** Partition function
@brief outputs total number of combinations of numbers, equal to or greater than k, that add up to n.

@param k		smaller parameter
@param n		larger parameter

@returns		number of combination sets adding up to n
*/
int partition(const int& k, const int& n);

#endif /* partition_hpp */
