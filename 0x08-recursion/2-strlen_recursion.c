#include "main.h"

/**
 * _strlen_recursion - pirnts the length of a string recursively
 * @s: Pointer to string
 *
 * Return: a number
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
