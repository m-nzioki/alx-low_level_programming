#include "main.h"

/**
 * _puts - prints a string
 *@str: pointer to string
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
