#include <stdio.h>

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

	if (argc > 0)
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	return (0);
}
