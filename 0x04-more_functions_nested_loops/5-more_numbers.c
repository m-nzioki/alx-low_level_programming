#include "main.h"
#include <unistd.h>

/**
 * more_numbers - prints out 10 times the  numbers 0 to 14
 *
 */

void more_numbers(void)
{
	int i;

	int j = 0;

	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(48 + (i / 10));
			_putchar(48 + (i % 10));
		}
		_putchar('\n');

		j++;
	}
}
