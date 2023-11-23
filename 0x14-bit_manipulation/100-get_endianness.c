#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 for big endiannes, 1 otherwise
 */

int get_endianness(void)
{
	unsigned int bit = 1;
	char *c = (char *) &bit;

	return (*c);
}
