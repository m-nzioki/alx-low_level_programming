#include "main.h"

/**
 * _strspn - calculates the length of a prefix substring
 * and returns only the number of bytes
 * @s:substring
 * @accept: string of comparison
 *
 * Return: number of bytes in the substring and in the string accept as well
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	for (; *s != '\0'; s++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				i++;
			}
		}
	}
	return (i);
}
