#include "main.h"

/**
 * print_alphabet - printing all the lowercase letters of the alphabet
 */


void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
}
