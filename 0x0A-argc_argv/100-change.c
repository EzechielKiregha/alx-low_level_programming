#include "main.h"

/**
 * cents - changes and returns the number of  pieces
 * @num: integer variable
 *
 * Return: coins the result
 */
int cents(int num);

/**
 * main - prints the result returned from cents
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int i, num;
	char buffer[10];
	char *temp = buffer;
	char error[7] = "Error\n";
	int cent;

	num = 0;
	if (argc < 2 || argc > 2)
	{
		i = 0;
		while (error[i] != '\0')
		{
			_putchar(error[i]);
			i++;
		}
		return (1);
	}
	else
		num = _atoi(argv[1]);
	cent = cents(num);
	while (cent)
	{
		*temp++ = cent % 10 + '0';
		cent /= 10;
	}
	while (temp-- != buffer)
		_putchar(*temp);
	_putchar('\n');
	return (0);
}


/**
 * cents - changes and returns the number of  pieces
 * @num: integer variable
 *
 * Return: coins the result
 */

int cents(int num)
{
	int coins = 0;

	if (num < 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	while (num > 0)
	{
		if (num >= 25)
		{
			coins++;
			num -= 25;
		}
		else if (num >= 10)
		{
			coins++;
			num -= 10;
		}
		else if (num >= 5)
		{
			coins++;
			num -= 5;
		}
		else if (num > 2)
		{
			coins++;
			num -= 2;
		}
		else
		{
			coins++;
			num -= 1;
		}
	}
	return (coins);
}
