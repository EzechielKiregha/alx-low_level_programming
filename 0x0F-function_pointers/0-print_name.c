#include "function_pointers.h"

/**
 * print_name - prints string name using function pointer
 * @name: pointer to string
 * @f: pointer to functionn
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
