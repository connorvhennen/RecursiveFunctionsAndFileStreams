/** @file stirling1.cpp
@brief Implements a stirling1 function
@author Connor Hennen
@date Nov 2, 2016
*/


/** Stirling1 Function

@param k		const int called by reference
@param n		const binary_int called by reference

@returns		an int = −(n − 1)s(k, n − 1) + s(k − 1, n − 1), with basecases S(k,n) defined
*/
int stirling1(const int& k, const int& n)
{
	// base case definitions
	if ((k < 0) || (n < 0))
	{
		return 0;
	}
	else if ((k == 0) && (n > 0))
	{
		return 0;
	}
	else if ((k > 0) && (n == 0))
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

	// Recursion
	else
	{
		return -(n - 1)*stirling1(k, n - 1) + stirling1(k - 1, n - 1);
	}
}


