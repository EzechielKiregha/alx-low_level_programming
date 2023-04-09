#include "main.h"

/**
 * main - prints the name of the program
 * @argc: integer variable
 * @argv: array to string
 *
 * Return: (0) always
 */

int main(int argc, char *argv[])
{
	int i;
	char *s;

	if (argc == 1)
	{
		s = argv[argc - 1];
		i = 0;
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
		_putchar('\n');
	}
	return (0);
}
