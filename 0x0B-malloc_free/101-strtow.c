#include "main.h"

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
 * _strncpy - copy a string up to n bytes
 * @dest: the destination buffer
 * @src: the source string
 * @n: the maximum number of bytes to copy
 *
 * Return: a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n);
/**
 * strtow -  splits a string into words.
 * @str: Pointer to string to be splited
 *
 * Return: A pointer to string
 *
 */
char **strtow(char *str)
{
	int i, j, size = 0, k = 0;
	char **s, **tmp;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		if ((j == 0 || str[j - 1] == ' ') && (str[j] != ' '))
			size++;
	tmp = (char **)malloc((size + 1) * sizeof(char *));
	if (tmp == NULL)
		return (NULL);
	j = 0;
	while (j < size)
	{
		while (*str == ' ')
			str++;
		i = 0;
		while (str[i] != ' ' && str[i] != '\0')
			i++;
		tmp[j] = (char *)malloc((i + 1) * sizeof(char));
		if (tmp[j] == NULL)
			return (NULL);
		_strncpy(tmp[j], str, i);
		tmp[j][i] = '\0';
		str += i;
		j++;
	}
	tmp[j] = NULL;
	s = (char **)malloc(sizeof(char *) * (size + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
	{
		s[k] = (char *)malloc(sizeof(char) * (_strlen(tmp[k]) + 1));
		if (s[k] == NULL)
			return (NULL);
		_strcpy(s[k], tmp[k]);
	}
	s[size] = NULL;
	return (s);
}
/**
 * _strncpy - copy a string up to n bytes
 * @dest: the destination buffer
 * @src: the source string
 * @n: the maximum number of bytes to copy
 *
 * Return: a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	unsigned int i;

	for (i = 0; i < (unsigned int)n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < (unsigned int)n; i++)
		dest[i] = '\0';
	return (dest);
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
