#include "main.h"

/**
 * main - prints the name of the file this program is compiled from
 *
 * Return: (0)
 */
int main(void)
{
	char *s = __FILE__;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');

	return (0);
}
