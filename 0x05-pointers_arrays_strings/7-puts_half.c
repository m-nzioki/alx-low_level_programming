#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to string
 *
 */

void puts_half(char *str)
{
	int n;
	int i = 0;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
		n = i / 2;
	else
		n = (i - 1) / 2;

	i--;

	for (; n <= i; n++)
		_putchar(*(str + n));
	_putchar('\n');
}
