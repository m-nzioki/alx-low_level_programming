#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int num = 0x01020304;
	unsigned char *ptr = (unsigned char *)&num;

	return (ptr[0] == 0x04);
}
