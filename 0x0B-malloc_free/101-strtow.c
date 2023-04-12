#include "main.h"

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

