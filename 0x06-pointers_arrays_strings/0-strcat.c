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
	char str[1000] = "";

	for (i = 0; dest[i] != '\0'; i++)
		str[i] = dest[i];
	for (j = 0; src[j] != '\0'; j++)
		str[i+j] = src[j];
	str[i + j + 1] = '\0';
	for (j = 0; str[j] != '\0'; j++)
		dest[j] = str[j];
	return (dest);
}
