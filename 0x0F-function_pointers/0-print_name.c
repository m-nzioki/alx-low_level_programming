#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: the name
 * @f: pointer to the function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
