#include "main.h"

/**
 * print_most_numbers - we print numbers from 0 to 9
 * expect 2 and 4 using _putchar function
 * Return no value
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
