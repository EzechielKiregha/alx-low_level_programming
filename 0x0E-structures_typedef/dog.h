#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
/**
 * struct dog - holds informations name, age, owner
 * @name: pointer to string
 * @age: foating point variable
 * @owner: pointer to string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
