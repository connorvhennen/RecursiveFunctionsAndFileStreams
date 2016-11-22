/** @file factorial.cpp
 @brief Implements a factorial function
 @author Connor Hennen
 @date Nov 2, 2016
 */

/** Factorial function

@param n		int input to get factorial of

@returns		Factorial of input stored as int
*/
int factorial(const int& n)
{
    int result = 1;
    
    // Factorial of negative numbers defined to be zero
    if (n < 0){
        int result = 0;
    };

    if(n == 0){
         int result = 1;	// Factorial of 0 defined to be 1
    }
   
    for (int i = 1; i <= n; ++i) // for loop multiplying output with each number uptil n
    {
        result *= i;
    }
    return result; // return output after loop
}
