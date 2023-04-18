#include "dog.h"

/**
 * *new_dog - creates a new dog struct.
 * @name: pointer to string
 * @age: float variable
 * @owner: pointer to string
 *
 * Return: Struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;

	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);
	dg->name = name;
	dg->age = age;
	dg->owner = owner;

	return (dg);
}
