#include <stdio.h>

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
	if (argv[argc] == NULL)
		printf("%d\n", argc - 1);
	return (0);
}
