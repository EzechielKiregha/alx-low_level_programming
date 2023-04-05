#include "main.h"

/**
 * factorial - prints the factorial numbers
 * @n: int variable
 *
 * Return: a number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n - 1));
}
