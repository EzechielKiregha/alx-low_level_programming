#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: pointer to the string to be searched
 * @accept: pointer to the set of bytes to search for
 *
 * Return: the number of bytes in the initial segment of the string
 *         that consist only of bytes from the set
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				count++;
				break;
			}
			p++;
		}
		if (*p == '\0')
			return (count);
		s++;
	}
	return (count);
}
