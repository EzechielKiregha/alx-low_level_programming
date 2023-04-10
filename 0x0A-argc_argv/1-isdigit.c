#include "main.h"
#include <stdio.h>
/**
 *  _isdigit - checking a int is digit
 * @c: is the in to be checked
 * Return: 1 if int is digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
