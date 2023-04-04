#include "lists.h"


/**
 * get_nodeint_at_index - get the integer at a given index
 * @head: the head node
 * @index: the index of the said integer
 *
 * Return: the element at the nth node;
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y = 0;

	if (head == NULL)
		return (NULL);
	for (y = 0; y < index; y++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
