#include <stdio.h>
/**
 * main -printing the sizes of some data types
 * Return: 0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf("The size of a char: %lu byte\n", (unsigned long)sizeof(a));
	printf("The size of an int: %lu bytes\n", (unsigned long)sizeof(b));
	printf("The size of a long int: %lu bytes\n", (unsigned long)sizeof(c));
	printf("The size of a long long int: %lu bytes\n", (unsigned long)sizeof(d));
	printf("The size of a float: %lu bytes\n", (unsigned long)sizeof(f));
	return (0);
}
