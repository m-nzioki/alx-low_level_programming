#include "main.h"
#include <unistd.h>

/**
 * puts_half - prints half of a string
 * @str: pointer to string
 *
 */

void puts_half(char *str)
{
	char *s;
	int i;
	int n;
	int j;

	for (s = str; *s != '\0'; s++)
	{
		i++;
	}

	if ((i % 2) != 0)
	
		n = (i - 1) / 2;
	else
		n = i / 2;

	for (j = n; j > 0; j--)
	{
		_putchar(*(s + n));
		n++;
	}
}
	
