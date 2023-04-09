#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer using _putchar function
 * @n: integer to print
 *
 * Return: no value
 */

void print_number(int n)
{
	if (n < 0) {
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
