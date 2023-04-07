#include "main.h"

/**
 * cmp - helper function to compare two strings
 *
 * @s1: first string to compare
 * @s2: second string to compare, may contain wildcard character *
 *
 * Return: 1 if s2 matches s1, otherwise 0
 */
int cmp(char *s1, char *s2);
/**
 * wildcmp - Compares two strings and returns 1 if they can be considered
 *           identical, otherwise returns 0.
 *
 * @s1: First string to be compared
 * @s2: Second string to be compared. This string can contain the special
 *      character '*'. The '*' can replace any string (including an empty
 *      string).
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	int l;

	l = strlen(s2);
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		else if (*(s2 + 1) < l)
			return (1);
		return (cmp(s1, s2));
	}
	else if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}

/**
 * cmp - helper function to compare two strings
 *
 * @s1: first string to compare
 * @s2: second string to compare, may contain wildcard character *
 *
 * Return: 1 if s2 matches s1, otherwise 0
 */
int cmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) != '\0')
	{
		if (wildcmp(s1 + i, s2 + 1))
			return (1);
		i++;
	}
	return (0);
}
