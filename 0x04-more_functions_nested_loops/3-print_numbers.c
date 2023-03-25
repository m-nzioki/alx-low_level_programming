#include "main.h"
#include <unistd.h>

/**
 * print_numbers - prints out the numbers 0 to 9
 *
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(48 + i);
		i++;
	}
	_putchar('\n');
}
