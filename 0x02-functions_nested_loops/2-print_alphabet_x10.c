#include "main.h"

/**
 * print_alphabet_x10 - printing lowercase letters 10 times
 */

void print_alphabet_x10(void)
{
	int alphabet_count = 0;

	while (alphabet_count < 10)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}

		alphabet_count++;

		_putchar('\n');
	}
}
