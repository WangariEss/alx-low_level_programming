#include "main.h"


/**
 * binary_to_uint - converting binary to unsigned integer
 * @b: binary string to pass
 * Return: the converted string or 0 if null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, len = 0, result = 0;

	if (b == NULL)
		return (0);

	while (*(b + len))
	{
		len++;
	}

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);
		if (b[len - 1] == '1')
			result += base;
		base *= 2;
		len--;
	}

	return (result);
}
