#include "lists.h"

/**
 * sum_listint - the sum of all elements in the list
 * @head: the head node
 *
 * Return: the sum of all elements in the linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
