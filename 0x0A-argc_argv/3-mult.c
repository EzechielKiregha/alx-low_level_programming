#include "main.h"

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
	char digit[20];
	int a;
	int b;
	int i;
	int j;
	char err[6] = "Error";

	if (argv[argc] == NULL)
	{
		if (argc - 1 == 0 || argc > 3)
		{
			for (i = 0; err[i] != '\0'; i++)
				_putchar(err[i]);
			_putchar('\n');
			return (1);
		}
		else
		{
			a = _atoi(argv[1]);
			b = _atoi(argv[2]);
			if (a < 0 || b < 0)
			{
				if ()
				_putchar('-');
			a = _abs(a);
			b = _abs(b);
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
		_putchar('\n');
	}
	return (0);
}
