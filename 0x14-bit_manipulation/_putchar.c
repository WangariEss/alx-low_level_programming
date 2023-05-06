#include "main.h"
#include <unistd.h>

/**
 * _putchar - print a character
 * @c: character to print
 * Return: the binary representation of a number
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
