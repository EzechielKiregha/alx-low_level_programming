#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - We are gonna check whether the last
 * digit of a number is greater than 5, is 0, or less
 * than 6, but not 0
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 > 5)
		printf("Last digit of %d is and is greater than 5\n", n);
	else if (n % 10 == 0)
		printf("Last digit of %d is and is 0\n", n);
	else
		printf("Last digit of %d is and is less than 6 and not 0\n", n);
	return (0);
}
