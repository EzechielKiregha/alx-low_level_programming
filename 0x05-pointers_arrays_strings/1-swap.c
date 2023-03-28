#include "main.h"

/**
 * swap_int - Swap values stored in pointer a and b.
 * @a : is the pointer
 * @b : is a pointer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int _a, _b, _temp;

	/*Assign values to local var*/
	_a = *a;
	_b = *b;
	/*Swap using the local variables*/
	_temp = _a;
	_a = _b;
	_b = _temp;
	/*Take the value swaped back to the pointers*/
	*a = _a;
	*b = _b;
}
