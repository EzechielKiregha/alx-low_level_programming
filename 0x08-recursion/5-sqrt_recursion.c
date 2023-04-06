#include "main.h"

/**
 * _sqrt_recursion - Computes the square root of a number recursively.
 *
 * Calls the sqrt_helper function to compute the natural square root
 * of a number and takes n as argument.
 *
 * @n: Integer variable representing the number whose square root.
 * @l: Integer variable representing the lower bound of the search range.
 * @h: Integer variable representing the upper bound of the search range
 *
 * Return: The natural square root of n if it exists, or -1 otherwise.
 */

int sqrt_helper(int l, int n, int h);

int _sqrt_recursion(int n)
{
	int l;
	int h;

	l = 0;
	h = n;
	return (sqrt_helper(l, n, h));
}

/**
 * sqrt_helper - Computes the natural square root of a number recursively
 * using binary search.
 *
 * @l: Integer variable representing the lower bound of the search range.
 * @n: Integer variable representing the number whose square root.
 * @h: Integer variable representing the upper bound of the search range.
 *
 * Return: The natural square root of n if it exists within
 * the search range [l, h], or -1 otherwise.
 */

int sqrt_helper(int l, int n, int h)
{
	int m;

	m = (l + h) / 2;
	if (n < 0 || l > h)
		return (-1);
	if ((m * m) == n)
		return (m);
	else if ((m * m) < n)
		return (sqrt_helper(m + 1, n, h));
	else
		return (sqrt_helper(l, n, m - 1));
}
