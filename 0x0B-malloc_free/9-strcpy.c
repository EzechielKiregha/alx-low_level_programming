#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: Pointer to a string
 * @src: Pointer to string
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (src[len] != '\0')
		len++;
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
