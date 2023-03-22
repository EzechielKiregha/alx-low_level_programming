#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - is actually going to print the lowercase
 * alphabet 10 times using _putchar()while and for loop
 */

void print_alphabet_x10(void)
{
	char alpha[35] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int  j;

	j = 0;
	while(j < 10)
	{
		for (i = 0; alpha[i] != '\0'; i++)
		{
			_putchar(alpha[i]);
		}
		_putchar('\n');
		j++;
	}
}
