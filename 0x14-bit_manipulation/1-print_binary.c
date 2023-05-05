#include "main.h"

/**
 * print_binary - prints the binary valu representation of a number
 * @n: the decimal number that get converted
 *
 * Return: nothing
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int lg;
	int c, zero = 0;

	c = 63;
	while (c >= 0)
	{
		lg = n >> c;
		if (lg & 1)
		{
			_putchar('1');
			zero++;
		}
		else if (zero)
			_putchar('0');
		c--;
	}
	if (!zero)
		_putchar('0');
}
