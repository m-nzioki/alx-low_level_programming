#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string
 *@str: pointer to string
 */

void _puts(char *str)
{
	char *t;

	for (t = str; *t != '\0'; t++)
	{
		_putchar(*t);
	}
	_putchar('\n');
}
