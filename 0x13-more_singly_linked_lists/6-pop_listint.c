#include "lists.h"

/**
 * pop_listint -deletes the head node
 * @head: pointer to the pointer of the head of the list
 * Return: head node data or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	temp = *head;

	if (temp == NULL)
		return (0);

	value = temp->n;
	*head = temp->next;

	free(temp);

	return (value);
}
