#include "main.h"

/**
 * _memset - fills first n bytes of memory area
 * pointed to by s with constant byte b
 * @s: memory area
 * @b: byte value
 * @n: number of bytes to be filled
 *
 * Return: pointer to new memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

