#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip to get
 * from one number to another.
 * @n: first operand
 * @m: second operand
 *
 * Return: the number of bits changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int c = 0, i;
	unsigned long int cur_val, excl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cur_val = excl >> i;
		if (cur_val & 1)
			c++;
	}

	return (c);
}
