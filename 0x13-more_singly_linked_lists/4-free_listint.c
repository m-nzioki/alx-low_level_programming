#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to the beginning of the list
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
