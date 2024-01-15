#include "main.h"
/**
 * _strstr - locates a substring within a string
 *
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to be located
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	size_t needle_len = strlen(needle);

	while (*haystack != '\0')
	{
		if (strncmp(haystack, needle, needle_len) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
