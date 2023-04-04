#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a linked list
 * @head: the head node
 * @n: the integer to add
 *
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_element, *current_node;

	new_element = malloc(sizeof(listint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->next = NULL;

	if (*head == NULL)
	{
		*head = new_element;
		return (new_element);
	}

	current_node = *head;

	while (current_node->next)
		current_node = current_node->next;
	current_node->next = new_element;
	return (new_element);
}
