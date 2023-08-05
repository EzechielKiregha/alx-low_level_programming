#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string containing the binary number
 *
 * Return: the converted unsigned int, or 0 if there is an error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec = 2 * dec + (b[i] - '0');
	}

	return (num);
}
