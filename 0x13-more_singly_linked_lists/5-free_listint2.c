#include "lists.h"

/**
 * free_listint2 - free a list and assign head to null
 * @head: the head node
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
