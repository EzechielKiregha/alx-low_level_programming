#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: array of type integers
 * @size: size_t of the array
 * @action: pointer to function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || action == NULL)
		return;
	i = 0;
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
