#include "lists.h"

/**
 * print_listint - print the linked list of integers
 * @h: the head node
 * Return: the number of nodes;
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count_nodes;

	count_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);
}
