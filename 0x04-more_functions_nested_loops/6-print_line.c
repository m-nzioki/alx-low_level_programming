#include "main.h"
#include <unistd.h>

/**
 * print_line - Draws a straight line using the '_' character
 * @n: defines number of time the character is printed
 *
 */

void print_line(int n)
{
	int i;

	int j = n;

	if (j > 0)
	{
		for (i = 0; i < j; i++)
			_putchar('_');
	}
	_putchar('\n');
}
