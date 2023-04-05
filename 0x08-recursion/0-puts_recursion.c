#include "main.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: Pointer to string
 *
 * Retrun a string
 */

void _puts_recursion(char *s)
{
	int len;

	len = sizeof(s) - 1;
	if (*s < len)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
