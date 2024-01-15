#include "main.h"

/**
 * _strcmp - a function that compares two strings s1 and s2.
 * @s1: Pointer to first string
 * @s2: pointer to second string
 *
 * Return: (s1 - s2)
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int dif;
	int len1 = 0;
	int len2 = 0;

	for (i = 0; s1[len1] != '\0'; i++)
		len1++;
	for (i = 0; s2[len2] != '\0'; i++)
		len2++;
	dif = len1 - len2;
	if (len1 > len2)
		return (dif);
	else if (len1 < len2)
		return (dif);
	else
		return (dif);
}
