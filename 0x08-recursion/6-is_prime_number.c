#include "main.h"

/**
 * is_prime - find the prime number
 * @i: first parameter
 * @j: second parameter
 *
 * Return: the boolean value
 */
int is_prime(int i, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (i % j == 0)
	{
		return (0);
	}
	return (is_prime(i, j - 1));
}

/**
 * is_prime_number - returns 1 if primenumber else return 0
 * @n: the input integer
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n < 3)
	{
		return (0);
	}
	return (is_prime(n, n - 1));
}
