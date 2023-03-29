#include "main.h"

/**
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: Pointer to a string
 * @src: Pointer to string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	int lim, len = 0;
	char strink[1000];

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
		strink[i] = dest[i];
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		lim = len + i;
		strink[lim] = src[i];
		if (i)
		{
			strink[lim + 1] = '\0';
			continue;
		}
	}
	for (j = 0; strink[j] != '\0'; j++)
		dest[j] = strink[j];
	return (dest);
}
