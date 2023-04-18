#include "dog.h"

/**
 * free_dog - frees dog variable of struct dog type.
 * @d: pointer to struct dog
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}
