#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the members of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
