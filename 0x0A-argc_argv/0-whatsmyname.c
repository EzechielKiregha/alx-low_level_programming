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
	if (argc == 1)
		printf("%s",argv[0]);
	return (0);
}
