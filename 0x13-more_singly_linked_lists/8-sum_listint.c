#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a listint_t linked list
 * @head: pointer to the beginning of the linked list
 * Return: 0 if empty else the sum.
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
