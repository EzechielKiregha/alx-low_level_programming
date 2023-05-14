#include "main.h"

/**
 * _strncpy - copy a string up to n bytes
 * @dest: the destination buffer
 * @src: the source string
 * @n: the maximum number of bytes to copy
 *
 * Return: a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	unsigned int i;

	for (i = 0; i < (unsigned int)n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < (unsigned int)n; i++)
		dest[i] = '\0';
	return (dest);
}
