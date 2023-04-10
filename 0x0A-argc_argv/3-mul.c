#include "main.h"

/**
 * nega - returns the character converted to integer
 * @arg: Pointer to array of string
 *
 * Return: (n) the number converted
 */

int nega(char *arg[]);

/**
 * main - multiplies two numbers.
 * @argc: integer variable
 * @argv: Pointer to array of strings
 *
 * Return: (0) always
 */

int main(int argc, char *argv[])
{
	int n;
	int si;
	char digit[20];
	int a;
	int b;
	int i;
	int j;

	if (argv[argc] == NULL)
	{
		if (argc - 1 == 0 || argc > 3)
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');
			return (1);
		}
		else
		{
			a = _atoi(argv[1]);
			b = _atoi(argv[2]);
			n = a * b;
			si = nega(argv);
			if (si == '-')
			{
				i = 0;
				while (n != 0)
				{
					digit[i] = (n % 10) + '0';
					n = n / 10;
					i++;
				}
				if (a < 0 || b < 0)
					_putchar('-');
				for (j = i - 1; j >= 0; j--)
					_putchar(digit[j]);
			}
			else
			{
				n = a * b;
				i = 0;
				while (n != 0)
				{
					digit[i] = (n % 10) + '0';
					n = n / 10;
					i++;
				}
				for (j = i - 1; j >= 0; j--)
					_putchar(digit[j]);
			}
		}
		_putchar('\n');
	}
	return (0);
}
/**
 * nega - returns the character converted to integer
 * @arg: Pointer to array of string
 *
 * Return: (n) the number converted
 */

int nega(char **arg)
{
	if (**arg == '-')
		return (-1);
	return (1);
}
