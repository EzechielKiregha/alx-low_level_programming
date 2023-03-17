#include <stdio.h>
/**
 * main - We are gonna print the entire alphabet
 * using this single function called 'putchar()'
 * in reverse order
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
