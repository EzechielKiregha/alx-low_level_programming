#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: integer variable
 * @argv: Pointer to array of strings
 *
 * Return: (0) always
 *
 */

int main(int argc, char *argv[])
{
	int n;

	if (argv[argc] == NULL)
	{
		n = argc - 1;
		print_number(n);
		_putchar('\n');
	}
	return (0);
}
