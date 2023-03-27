#include "main.h"
#include <unistd.h>

/**
 * _puts2 - prints every other character of a string
 *@str - pointer to string
 */

void puts2(char *str)
{
	char *t;

	for (t = str; *t != '\0'; t= t + 2)
	{
		_putchar(*t);
	}
	_putchar('\n');
}
