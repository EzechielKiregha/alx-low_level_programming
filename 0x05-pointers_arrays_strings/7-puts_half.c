#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: Pointer to a string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len, n;

	len = 0;
	while (str[len] != '\0')
		len++;
	n = (len - 1) / 2;
	if (n != 0)
		n = n + 1;
	while (n != len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');

}
