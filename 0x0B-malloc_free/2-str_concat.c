#include "main.h"

/**
 * str_concat -  concatenates two strings.
 * @s1: Pointer to a string
 * @s2: Pointer to a string
 *
 * Return: A pointer to a string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char str[1000] = "";
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		str[i + j] = s2[j];
	str[i + j + 1] = '\0';
	ptr = (char *)malloc(sizeof(char) * j + i);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		ptr[j] = str[j];
	return (ptr);
}
