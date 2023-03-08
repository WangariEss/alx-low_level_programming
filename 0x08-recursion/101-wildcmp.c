#include "main.h"

/**
 * strlen_no_wilds - return the length of a string
 * @str: the string to be measured
 *
 * Return: the length of a string
 */

int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
		{
			len++;

			index++;
			len += strlen_no_wilds(str + index);
		}
	}
	return (len);
}

/**
 * iterate_wild - iterate through the string untill
 * it points to a non wild card
 * @wildstr: string to iterate
 */

void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 * postfix_match - checks if a string matches the postfi
 * of another string potentially containing wildcards
 * @str: the string to be matched
 * @postfix: the postfix
 * Return: if str and postfix are identical, return a pointer to the null byte
 * otherwise a pointer to the first unmached character in the postfix
 */

char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
	{
		iterate_wild(&postfix);
	}
	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}
	return (postfix);
}

/**
 * wildcmp - compares two strings considering wild card characters
 * @s1: the first parameter
 * @s2: the second string
 *
 * Return: 1 if identical otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
	{
		return (1);
	}
	if (*s1 != *s2)
	{
		return (0);
	}
	return (wildcmp(++s1, ++s2));
}
