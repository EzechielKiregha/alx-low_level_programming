#include <stdio.h>
/**
 * main - We are gonna print the entire alphabet [abzABZ]
 * using this single function called 'putchar()'
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	for (i = 65; i <= 90; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
