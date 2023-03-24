#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, replace multiples of 3 with "Fizz",
 *        multiples of 5 with "Buzz", multiples of both with "FizzBuzz".
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz ");
		else if (i == 1)
			printf("%d ", i);
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}

