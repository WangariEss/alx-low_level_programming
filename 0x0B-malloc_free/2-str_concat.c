#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenating two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *new_string, *new_s1, *new_s2;
	int i = 0, len_s1, len_s2;

	new_s1 = s1;
	new_s2 = s2;

	if (s1 == NULL)
		s1 = "";
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	s1 = new_s1;
	s2 = new_s2;
	new_string = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	new_s1 = new_string;
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (; i < (len_s1 + len_s2); i++)
	{
		if (i < len_s1)
		{
			new_string[i] = *s1;
			s1++;
		}
		else
		{
			new_string[i] = *s2;
			s2++;
		}
	}
	new_string[i] = '\0';
	return (new_s1);
}
