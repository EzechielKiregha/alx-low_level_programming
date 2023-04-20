#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
 * main - does simple operations (+,*,-,/,%)
 * @argc: integer variable (argument counter)
 * @argv: pointer to string
 *
 * Return: (0) always
 */
int main(int argc, char *argv[])
{
	int calc, num1, num2;
	char *operator;

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (operator[1] != '\0' || get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	calc = get_op_func(operator)(num1, num2);
	printf("%d\n", calc);
	return (0);
}
