#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
	return write(1, &c, 1); /*print a single character to the stdout*/
}
