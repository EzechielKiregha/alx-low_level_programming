#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer using _putchar function
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int num, div, digit;
	unsigned int abs_num;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}

	div = 1;
	if (n < 0)
	{
		abs_num = -n;
		_putchar('-');
	}
	else
	{
		abs_num = n;
	}

	num = abs_num;
	while (num / div >= 10)
	{
		div *= 10;
	}

	while (div != 0)
	{
		digit = num / div;
		_putchar(digit + '0');
		num %= div;
		div /= 10;
	}

	_putchar('\n');
}

