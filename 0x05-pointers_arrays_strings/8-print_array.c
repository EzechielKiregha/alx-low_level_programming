#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: Pointer to an array
 * @n: int size of an array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a++));
		if (i == n - 1)
			continue;
		printf(",");
		printf(" ");
	}
	printf("\n");
}
