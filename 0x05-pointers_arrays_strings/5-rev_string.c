#include "main.h"
#include <unistd.h>

/**
 * rev_string - reverses a string
 * @s: string pointer
 *
 */

void rev_string(char *s)
{

	int j = 0;
	int i = 0;
	char x = s[j];

	while (s[i] != '\0')
	{
		i++;
	}

	for (; i >= 0; i--)
	{
		s[j] = s[i];
		x = s[i];
		j++;
	}

	_putchar('\n');
}
