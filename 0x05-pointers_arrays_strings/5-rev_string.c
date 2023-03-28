#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to string to be reversed
 *
 * Return: void.
 */

void rev_string(char *s)
{
	int len, i;
	char temp;

	len = 0;
	while (s[len] != '\0')
		len++;
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
