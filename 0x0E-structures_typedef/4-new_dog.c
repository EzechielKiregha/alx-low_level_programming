#include "dog.h"
/**
 * _strlen - Computes the length of a string.
 * @s: Pointer to a string of characters.
 * Return: The length of the string.
 */

int _strlen(char *s);
/**
 * _strcpy -  copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: Pointer to a string
 * @src: Pointer to string
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src);

/**
 * _strlen - Computes the length of a string.
 * @s: Pointer to a string of characters.
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * _strcpy -  copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: Pointer to a string
 * @src: Pointer to string
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (src[len] != '\0')
		len++;
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
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
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);
	dg->name = malloc(sizeof(char) * (l1 + 1));
	if (dg->name == NULL)
	{
		free(dg);
		return (NULL);
	}
	dg->owner = malloc(sizeof(char) * (l2 + 1));
	if (dg->owner == NULL)
	{
		free(dg);
		free(dg->name);
		return (NULL);
	}
	dg->age = age;
	_strcpy(dg->name, name);
	_strcpy(dg->owner, owner);
	return (dg);
}
