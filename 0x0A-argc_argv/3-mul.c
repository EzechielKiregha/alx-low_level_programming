#include "main.h"

/**
 * mult - multiplies and returns the peoduct of 2 numbers
 * @n: integer variable
 * @argv: Pointer to array of strings
 *
 * Return: result on succes, otherwise (1) on fail
 */

int mult(int n, char *argv[]);

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

	result = mult(argc, argv);
	if (result == -1)
		return (1);
	if (result == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	if (result < 0 && result != -1)
	{
		_putchar('-');
		result = -result;
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
 * mult - multiplies and returns the peoduct of 2 numbers
 * @n: integer variable
 * @argv: Pointer to array of strings
 *
 * Return: result on succes, otherwise (1) on fail
 */

int mult(int n, char *argv[])
{
	int i, j, t, num1 = 0, num2 = 0, result;
	char error[7] = "Error\n";
	int echec;

	if (n != 3)
	{
		i = 0;
		while (error[i] != '\0')
		{
			_putchar(error[i]);
			i++;
			echec = -1;
		}
	}
	for (i = 1; i < n; i++)
	{
		if (argv[i][0] == '-')
		{
			_putchar('-');
			j = 1;
		}
		else
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
					echec = -1;
				}
			}
			if (i == 1)
				num1 = num1 * 10 + argv[i][j] - '0';
			else
				num2 = num2 * 10 + argv[i][j] - '0';
		}
	}
	if (echec < 0)
		result = -1;
	else
		result = num1 * num2;
	return (result);
}
