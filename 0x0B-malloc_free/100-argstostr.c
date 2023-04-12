#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: integer variable
 * @av: Pointer to string
 *
 * Return: A pointer to string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, m = 0;
	char temp[10000] = "";
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	k = 0;
	while (k < ac)
	{
		for (i = 0; av[k][i] != '\0'; i++)
		{
			temp[m + i] = av[k][i];
			if (av[k][i] == '\0')
			{
				m++;
			}
		}
		m = m + i;
		temp[m] = '\n';
		m = m + 1;
		k++;
	}
	ptr = (char *)malloc(sizeof(char) * m + 1);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; temp[j] != '\0'; j++)
		ptr[j] = temp[j];
	return (ptr);
}
