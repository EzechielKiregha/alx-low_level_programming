#include "main.h"

/**
 * _strncat -  function is similar to the _strcat function,
 * except that it will use at most n bytes from src;
 * and src does not need to be null-terminated if it contains n or more bytes
 * @dest: Pointer to a string
 * @src: Pointer to string
 * @n: integer that represent the limit
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	unsigned int len = 0;
	unsigned int i;

	for (i = 0; dest[i] != '\0'; i++)
		len++;
	for (i = 0; i < (unsigned)n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	if ((unsigned)n < len)
		dest[len + i] = '\0';
	return (dest);
}
