/** @file partition.cpp
 @brief Implements a partition function
 @author Connor Hennen
 @date Nov 2, 2016
 */


/** Partition function
@brief outputs total number of combinations of numbers, equal to or greater than k, that add up to n.

@param k		smaller parameter
@param n		larger parameter

@returns		number of combination sets adding up to n
*/
int partition(const int& k, const int& n)
{
	// Base case definition
    if ((k < 0)||(n < 0))
    {
        return 0;
    }
    else if ((k == 0)&&(n > 0))
    {
        return  0;
    }
    else if ((k >= 0)&&(n == 0))
    {
        return 1;
    }

	// Recursion
    else if (k > n)
    {
        return partition(n, n);
    }
    else
    {
        return partition(k, n - k) + partition(k - 1, n);
    }
}

