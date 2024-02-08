#include <stdio.h>

/**
 * is_palindrome - Checks weither a number is palidrome or not
 * @n: the number to check
 * Return: true if yes the number is palindrome and large
 */

int is_palindrome(int n)
{
	int reverse = 0;
	int temp = n;

	while (temp != 0)
	{
		int remainder = temp % 10;

		reverse = reverse * 10 + remainder;
		temp /= 10;
	}

	return (n == reverse);
}

/**
 * main - check the code
 * Return: 0
 */

int main(void)
{
	int largest_palindrome = 0;

	for (int i = 999; i >= 100; i--)
	{
		for (int j = 999; j >= i; j--)
		{
			int product = i * j;

			if (product > largest_palindrome && is_palindrome(product))
				largest_palindrome = product;
		}
	}

	FILE *file = fopen("102-result", "w");

	fprintf(file, "%d", largest_palindrome);
	fclose(file);

	return (0);
}
