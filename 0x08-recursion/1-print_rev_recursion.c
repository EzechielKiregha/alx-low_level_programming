#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse order recursively
 * @s: Pointer to string
 *
 * Retrun a string
 */

void _print_rev_recursion(char *s)
{
	int len;
	char *p = s;

	len = sizeof(p) - 1;
	if (*p < len)
		return;
	_print_rev_recursion(p + 1);
	_putchar(*p);
}
