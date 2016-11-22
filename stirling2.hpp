/** @file stirling2.hpp
 @brief Declares stirling2 recursion function that will appear in the main routine
 @author Connor Hennen
 @date Nov 2, 2016
 */

#ifndef stirling2_hpp
#define stirling2_hpp

/** @function Stirling2

@param k		const int by reference
@param n		const int by reference

@returns		an int = kS(k, n − 1) + S(k − 1, n − 1), with basecases S(k,n) defined
*/
int stirling2(const int& k, const int& n);

#endif /* stirling2_hpp */
