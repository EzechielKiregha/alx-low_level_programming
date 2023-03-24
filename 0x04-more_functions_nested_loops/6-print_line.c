#include "main.h"

/**
 * print_line - prints a line n times in the terminal
 * @n : is the counter
 * return : no value
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
