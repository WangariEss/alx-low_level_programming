#include "lists.h"

/**
 * free_listint - free the linked list
 * @head: the head node
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
