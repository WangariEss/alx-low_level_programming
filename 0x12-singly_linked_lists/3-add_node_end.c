#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add a node at the end
 * @head: the head of the node
 * @str: string to add
 *
 * Return: pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *Nptr;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);

	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->len = strlen(ptr->str);
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	Nptr = *head;

	while (Nptr->next)
	{
		Nptr = Nptr->next;
	}
	Nptr->next = ptr;
	return (ptr);
}
