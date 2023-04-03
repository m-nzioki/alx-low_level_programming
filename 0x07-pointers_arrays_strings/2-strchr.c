#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: the string being searched
 * @c: the character being searched for.
 *
 * Return: pointer to the first occurence of c
 *  or NULL if c is not found
 *
 */

char *_strchr(char *s, char c)
{
	do
		if ( *s == c)
		{
			return ((char *)s);
		}
	while (s++);

	return (0);
}
