#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array of integers
 * @size: Integer variable that store the size of the array
 * @cmp: pointer to function
 *
 * Return: a number as index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
