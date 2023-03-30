#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string input
 * Return: encoded value
 */

char *leet(char *s)
{
	char alph[] = "a4A4e3E3o0O0t7T7l1L1";

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alph[j] != '\0'; j++)
		{
			if (s[i] == alph[j])
			{
				s[i] = alph[j + 1];
				break;
			}
		}
	}
	return (S);
}
