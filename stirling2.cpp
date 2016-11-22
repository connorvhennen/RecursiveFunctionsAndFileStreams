/** @file stirling2.cpp
 @brief Implements a stirling2 function
 @author Connor Hennen
 @date Nov 2, 2016
 */

/** @function Stirling2

@param k		const int by reference
@param n		const int by reference

@returns		an int = kS(k, n − 1) + S(k − 1, n − 1), with basecases S(k,n) defined
*/
int stirling2(const int& k, const int& n)
{
	// define base cases
    if ((k < 0)||(n < 0))
    {
        return 0;
    }
    else if ((k == 0)&&(n > 0))
    {
        return 0;
    }
    else if ((k > 0)&&(n == 0))
    {
        return 0;
    }
    else if (k > n)
    {
        return 0;
    }
    else if (k == n)
    {
        return 1;
    }

	// recursion
    else
    {
        return k*stirling2(k, n - 1) + stirling2(k - 1, n - 1);
    }
}
