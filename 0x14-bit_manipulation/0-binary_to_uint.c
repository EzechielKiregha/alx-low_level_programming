#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: the string that contains the binary number to convert
 *
 * Return: The unsigned bin number, 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;
	int i = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0')
			r = r << 1;
		else if (b[i] == '1')
			r = (r << 1) | 1;
		else
			return (0);
		i++;
	}
	return (r);
}
