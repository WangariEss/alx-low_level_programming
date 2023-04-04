#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a node
 * @head: the head node
 * @n: the element to be added
 *
 * Return: a pointer to the added element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newelement;

	if (head == NULL)
		return (NULL);

	newelement = malloc(sizeof(listint_t));
	if (newelement == NULL)
		return (NULL);

	newelement->n = n;
	newelement->next = *head;
	*head = newelement;

	return (newelement);
}
