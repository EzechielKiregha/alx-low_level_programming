#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: Pointer to struct dog
 * @name: pointer to string
 * @age: floating poit variables
 * @owner: pointer to string
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
