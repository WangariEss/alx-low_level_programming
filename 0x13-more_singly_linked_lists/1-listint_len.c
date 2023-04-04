#include "lists.h"

/**
 * listint_len - return the length of the linked list
 * @h: the head node
 * Return: the nuber of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	int count_length;

	count_length = 0;

	while (h != NULL)
	{
		count_length++;
		h = h->next;
	}
	return (count_length);
}
