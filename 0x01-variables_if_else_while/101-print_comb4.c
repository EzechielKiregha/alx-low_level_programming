#include <stdio.h>
#include <stdlib.h>
/**
 * main -We print all digit to the std output.
 * using the for loop print via putchar
 * and diplay possible combinations of two digits
 *
 * Return: 0
 *
 */

int main(void)
{
	int k;
	int j;
	int i;

	for (i = 48; i <= 56; i++)
	{
		for (j = i + 1; j <= 56; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
