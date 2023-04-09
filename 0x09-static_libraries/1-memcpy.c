#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to be copied
 *
 * Return: pointer to the destination memory area (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;

	while (n-- > 0)
		*pdest++ = *src++;
	return (dest);
}
