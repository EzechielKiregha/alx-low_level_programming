#include "main.h"

/**
 * add - multiplies and returns the summation of numbers
 * @n: integer variable
 * @argv: Pointer to array of strings
 *
 * Return: result on succes, otherwise (1) on fail
 */

int add(int n, char *argv[]);

/**
 * main - multiplies two numbers
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int result;
	char buffer[10];
	char *temp = buffer;

	if (argc - 1 == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (1);
	}
	else
		result = add(argc, argv);
	if (result == -1)
		return (1);
	if (result == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	while (result)
	{
		*temp++ = result % 10 + '0';
		result /= 10;
	}
	while (temp-- != buffer)
		_putchar(*temp);
	_putchar('\n');
	return (0);
}

/**
 * add - add and returns the summation of numbers
 * @n: integer variable
 * @argv: Pointer to array of strings
 *
 * Return: result on succes, otherwise (1) on fail
 */

int add(int n, char *argv[])
{
	int i, j, t, num = 0, sum = 0;
	char error[7] = "Error\n";

	for (i = 1; i < n; i++)
	{
		j = 0;
		for (; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				t = 0;
				while (error[t] != '\0')
				{
					_putchar(error[t]);
					t++;
				}
				return (-1);
			}
			num = num * 10 + argv[i][j] - '0';
		}
		sum += num;
		num = 0;
	}
	return (sum);
}
