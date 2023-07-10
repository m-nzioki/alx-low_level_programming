#include "lists.h"

/**
 * free_listint2 - frees a list, sets head to NULL
 * @head: pointer to the beginning of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}

	*head = NULL;
}
