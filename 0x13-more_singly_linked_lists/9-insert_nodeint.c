#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the beginning of the list
 * @idx: index where new node will be added
 * @n: content of the new node
 * Return: NULL if it fails, else address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new_node;
	unsigned int i;

	ptr = *head;

	new_node = malloc(sizeof(listint_t));

	if (ptr == NULL || new_node == NULL)
		return (NULL);

	new_node->n = n;
	for (i = 0; i < idx; i++)
	{
		if (i == (idx - 1))
		{
			new_node->next = ptr->next;
			ptr->next = new_node;
			return (new_node);
		}
		ptr = ptr->next;
	}
	return (NULL);
}
