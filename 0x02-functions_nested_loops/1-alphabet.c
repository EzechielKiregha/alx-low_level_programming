#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - is actually going to print the lowercase
 * alphabet using _putchar()
 */

void print_alphabet(void)
{
	char alpha[26] = "abcdifghjklmnopqrstvwxyz";
	int i;

	for (i = 0; alpha[i] != '\0'; i++)
	{
		_putchar(alpha[i]);
	}
	_putchar('\n');
}
