#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @first: pointer to the first character of the string to check
 * @last: pointer to the last character of the string to check
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int pali(char *first, char *last);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int l;

	l = strlen(s);
	return (pali(s, s + l - 1));
}

/**
 * pali - helper function that recursively checks
 * if a string is a palindrome
 * @first: pointer to the first character of the string to check
 * @last: pointer to the last character of the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int pali(char *first, char *last)
{
	if (*first == '\0')
		return (1);
	if (first >= last)
		return (1);
	if (*first != *last)
		return (0);
	return (pali(first + 1, last - 1));
}
