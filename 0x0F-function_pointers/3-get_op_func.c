#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform
 * the operation asked by the user.
 * @s: pointer to string holds the operator
 *
 * Return: A pointer to the function related the given operator
 */
int (*get_op_func(char *s))(int, int)
{
	int c;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	c = 0;
	while (ops[c].op != NULL)
	{
		if (*(ops[c].op) == *s)
			return (ops[c].f);
		c++;
	}
	return (NULL);
}
