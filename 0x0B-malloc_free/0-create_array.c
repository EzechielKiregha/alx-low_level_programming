#include "main.h"

/**
 * create_array - Creates an array of chars and
 * initializes it with a specific char.
 * @size: The size of the array to be created.
 * @c: The char to initialize the array with.
 *
 * Return: A pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(sizeof(char) * size);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
