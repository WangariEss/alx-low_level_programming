#include "main.h"

/**
 * is_square_root - return the squareroot of a number
 * @i: first input value
 * @j: second input value
 *
 * Return: the squareroot
 */

int is_square_root(int i, int j)
{
	if (j * j > i)
	{
		return (-1);
	}
	if (j * j == i)
	{
		return (j);
	}
	return (is_square_root(i, j + i));
}


/**
 * _sqrt_recursion - return the natural squareroot of a number
 * @n: the main parameter
 *
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (is_square_root(n, 1));
}
