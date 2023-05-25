#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string pointer
 *
 */

void rev_string(char *s)
{
	char temp;
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		i--;
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}
