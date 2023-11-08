#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: Name to be printed.
 * @f: A pointer that points to the function that print a name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
