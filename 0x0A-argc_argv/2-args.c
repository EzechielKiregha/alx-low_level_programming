#include "main.h"

/**
 * main - prints all arguments it receives.
 * @argc: integer variable
 * @argv: Pointer to array of strings
 *
 * Return: (0) always
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	char *s;

	if (argc > 0)
		for (i = 0; i < argc; i++)
		{
			s = argv[i];
			j = 0;
			while (s[j] != '\0')
			{
				_putchar(s[j]);
				j++;
			}
			_putchar('\n');
		}
	return (0);
}
