#include "main.h"

/**
 * is_prime_number -  returns 1 if the input integer is a prime number,
 * otherwise return 0.
 *
 * @n: Integer variable whose value is checked.
 *
 * Return: 1 if n is prime, otherwise 0
 */

int is_prime_number(int n)
{
	int l;

	l = 3;
	if (n < 2 || n < 0)
		return (0);
	else if (n == 2)
		return (1);
	else if (n % 2 == 0 || n % 5 == 0 || n % 10 == 0)
		return (0);
	l = l + 1;
	if (n % l != 0)
		return (1);

	else
		return (0);
	is_prime_number(n);
}
