#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * @index: index of node that should be deleted
 * @head: pointer to the pointer of the beginning of the list
 * Return: 1 if successful, else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *curr;
	unsigned int i;

	ptr = *head;

	if (*head == NULL)
		return (-1);

	for (i = 0; i < index; i++)
	{
		if (ptr == NULL || ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
	}
	curr = ptr->next;
	ptr->next = curr->next;

	free(curr);

	return (1);
}
