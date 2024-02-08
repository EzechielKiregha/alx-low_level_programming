#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to the memory area to be filled
 * @b: the byte to fill the memory with
 * @n: number of bytes to be filled
 *
 * Return: pointer to the filled memory area (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
