#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: pointer to the string to be searched
 * @accept: pointer to the set of bytes to search for
 *
 * Return: pointer to the byte in the string that matches one of the bytes
 *         in the set, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	p = accept;
	while (*s != '\0')
	{
		while (*p != '\0')
		{
			if (*s == *p)
				return (s);
			p++;
		}
		s++;
	}
	return (NULL);
}
