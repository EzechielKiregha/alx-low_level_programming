#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: Pointer to a string of character
 *
 * Return: void
 */

void puts2(char *str)
{
	int a, i;

	i = 0;
	while (str[i] != '\0')
		i++;
	a = 0;
	for (; a <= i - 1;)
	{
		_putchar(str[a]);
		a = a + 2;
	}
	_putchar('\n');
}
