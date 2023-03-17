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
		putchar(i);
	for (i = 97; i <= 102; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
