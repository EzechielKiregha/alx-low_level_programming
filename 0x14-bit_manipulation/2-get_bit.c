#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the unsigned long int number to extract the bit from
 * @index: the index of the bit to extract, starting from 0
 *
 * Return: the value of the bit at the given index or -1 (incase an error)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int Ul;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	Ul = 1UL << index;

	return ((n & Ul) != 0);
}
