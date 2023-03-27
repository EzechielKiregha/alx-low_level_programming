#include "main.h"
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * positive_or_negative -We are checking whether a number is
 * positive, zero, or negative
 * @i: int to be checked
 * Return: 0
 */
void positive_or_negative(int i)
{
	/* your code goes there */
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
