#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 1 for small, 0 for big
 */

int get_endianness(void)
{
	unsigned int i = 1;
	unsigned char *byte;

	byte = (unsigned char *)&i;

	return ((int)*byte);
}
