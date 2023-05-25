#include "main.h"

/**
 * print_rev - prints a string in reverse
 *@s: pointer to string
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	do {
		_putchar(s[i]);
		i--;
	} while (i >= 0);

	_putchar('\n');
}
