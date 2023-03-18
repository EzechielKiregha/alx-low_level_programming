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
		if (i == 48)
		{
			j = 49;
			k = 50;
		}
		else if (i == 49)
		{
			j = 50;
			k = 51;
		}
		else if (i == 50)
		{
			j = 51;
			k = 52;
		}
		else if (i == 51)
		{
			j = 52;
			k = 53;
		}
		else if (i == 52)
		{
			j = 53;
			k = 54;
		}
		else if (i == 53)
		{
			j = 54;
			k = 55;
		}
		else if (i == 54)
		{
			j = 55;
			k = 56;
		}
		else if (i == 55)
		{
			j = 56;
			k = 57;
		}
		else
			j = 57;
		for (; j <= 57;)
		{
			for (; k <= 57;)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				k++;
				if (i == 55)
					continue;
				putchar(',');
				putchar(' ');
			
			}
		j++;	
		}
	}
	putchar('\n');
	return (0);
}
