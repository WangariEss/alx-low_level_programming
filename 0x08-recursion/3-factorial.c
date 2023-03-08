#include "main.h"

/**
 * factorial - return the factorial of a number
 * @n: the integer to find the factorial of
 *
 * Return: the factorial of a number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
