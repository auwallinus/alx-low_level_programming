#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name from a function pointer.
 * @name: The name to be printed.
 * @f: A pointer to a function that prints a name.
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
