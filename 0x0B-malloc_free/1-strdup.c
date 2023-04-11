#include "main.h"

/**
 * _strdup -  returns a pointer to a newly allocated space in memory.
 * @str: Pointer to a string
 *
 * Return: A pointer to a string, or NULL if insufficient memory.
 */

char *_strdup(char *str)
{
	char *newstr;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	newstr = (char *)malloc(sizeof(char) * i);
	if (newstr == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		newstr[j] = str[j];
	return (newstr);
}
