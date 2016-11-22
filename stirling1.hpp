/** @file stirling1.hpp
 @brief Declares stirling1 recursion function that will appear in the main routine
 @author Connor Hennen
 @date Nov 2, 2016
 */

#ifndef stirling1_hpp
#define stirling1_hpp

/** @function Stirling1

@param k		const int called by reference
@param n		const int called by reference

@returns		an int = −(n − 1)s(k, n − 1) + s(k − 1, n − 1), with basecases S(k,n) defined
*/
int stirling1(const int& k, const int& n);

#endif /* stirling1_hpp */
