#include "main.h"

/**
 * print_buffer - print a buffer
 * @b: buffer
 * @size: the size of the buffer
 *
 * Retuen: buffer
 */

void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			pr
