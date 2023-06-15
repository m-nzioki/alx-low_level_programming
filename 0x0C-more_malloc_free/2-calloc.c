#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array and sets it to 0
* @nmemb: elements of the array
* @size: number of bytes
* Return: NULL if nmemb or size = 0 or if malloc fails
* else returns pointer to array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	/* Setting memory to 0 */

	for (i = 0; i < (size * nmemb); i++)
		pointer[i] = 0;

	return (pointer);
}
