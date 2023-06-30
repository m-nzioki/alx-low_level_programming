#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to the beginning of the linked list
 */

void free_list(list_t *head)
{
	list_t *curr, *prev;

	curr = head;

	while (curr != NULL)
	{
		prev = curr;
		curr = curr->next;
		free(prev->str);
		free(prev);
	}
}
