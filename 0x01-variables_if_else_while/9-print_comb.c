#include <stdio.h>
/**
 * main -We print all digit to the std output.
 * using for loop through 0 - 10 print via putchar
 *
 * Return: 0
 *
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
		
	}
	putchar('\n');
	return (0);
}
