#include "main.h"

/**
 * get_bit - returns the value of a bit at the given index
 * @n: the binary number
 * @index: index of the bit value to be returned
 *
 * Return: the bit value '1' or '0', otherwise '-1'
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value_bit;

	if (index > 63)
		return (-1);
	value_bit = (n >> index) & 1;

	return (value_bit);
}
