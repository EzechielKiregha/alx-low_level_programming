#include "main.h"

/**
 * print_numbers - we print number from 0 to 9
 * using _putchar function
 * Return no value
 *
 */

void print_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
