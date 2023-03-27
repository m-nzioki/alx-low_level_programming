#include "main.h"
#include <unistd.h>

/**
 * print_rev - prints a string in reverse
 *@s: pointer to string
 */

void print_rev(char *s)
{
	char *t, *u;

	t = s;
	u = s;

	for (; *t != '\0'; t++)
	{
		u++;
	}

	for (; u >= s; u--)
	{
		_putchar(*u);
	}
	_putchar('\n');
}
