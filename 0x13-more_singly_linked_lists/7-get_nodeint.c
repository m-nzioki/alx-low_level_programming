#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - gets the nth node of a linked list
 * @head: pointer to the beginning of the list
 * @index: index of the node
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;
	unsigned int i;
	listint_t *ptr = head;

	for (n = 0; ptr != NULL; n++)
		ptr = ptr->next;

	if (index > (n - 1))
		return (NULL);

	ptr = head;

	for (i = 0; i < index; i++)
	{
		ptr = ptr->next;
	}
	return (ptr);
}
