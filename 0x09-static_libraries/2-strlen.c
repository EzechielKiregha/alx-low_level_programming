#include "main.h"

/**
 * _strlen - Computes the length of a string.
 * @s: Pointer to a string of characters.
 * Return: The length of the string.
*/

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
