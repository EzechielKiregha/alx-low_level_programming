#include "dog.h"
#include <stdio.h>
#include <math.h>

/**
 * print_dog - prints a struct dog values inside to standard output
 * @d: pointer to struct dog
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
		if (d->name == NULL || isnan(d->age) || d->owner == NULL)
		{
			if (d->name == NULL)
				printf("name: (nil)");
			else
				printf("(nil)");
		}
		else
		{
			printf("Name: %s\nAge: %2f\nOwner: %s\n", d->name, d->age, d->owner);
		}
	else
		printf("\n");
}
