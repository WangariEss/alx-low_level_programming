#include "lists.h"

/**
 * pop_listint - delete the head node
 * @head: the head node
 *
 * Return: 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	int number;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	number = temp->n;

	free(temp);
	return (number);
}
