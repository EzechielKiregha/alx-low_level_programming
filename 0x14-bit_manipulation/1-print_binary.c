#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: is the number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int value;
	int c = 0, i = 63;

	while (i >= 0)
	{
		value = n >> i;
		if (value & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
		i--;
	}
	if (!c)
		_putchar('0');
}
