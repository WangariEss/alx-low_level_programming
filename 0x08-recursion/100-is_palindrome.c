#include "main.h"

/**
 * str_len - getting the length of the string
 * @s: first parameter
 * Description: finding the length of a string
 *
 * Return: the string length
 */

int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + str_len(s + 1));
}

/**
 * check_palindrome - checks for a palindrome
 * @s: first parameter
 * @i: second parameter
 * @len: the length of the string
 * Description: finding whether it is palindrome
 *
 * Return: the state of the string
 */

int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
	{
		return (1);
	}
	if (s[i] == s[len - i - 1])
	{
		return (check_palindrome(s, len, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - prints boolean if palendrome or nor
 * @s: string
 * Description: prints 1 if the string is a palendrome and 0 if not
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int i, len;

	i = 0;
	len = str_len(s);

	if (!*s)
	{
		return (1);
	}
	return (check_palindrome(s, len, i));
}
