#include "main.h"
#include <string.h>
#include <stdlib.h>


/**
 * _strdup - return a pointer to the newly allocated memory
 * containing a copy of the string
 * @str: the strint to copy
 *
 * Return: pointer to copy
 */

char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[len] = '\0';

	return (duplicate);
}
