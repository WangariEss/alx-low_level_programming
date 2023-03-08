#include "main.h"

/**
 * _strlen_recursion - determine the string length
 * @s: the string to pass
 *
 * Return: the strint length
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
