#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number for which to find the square root
 *
 * Return: The natural square root of n if it exists, -1 otherwise
*/

int square(int n, int v);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: to find square root
 * @v: square root
 *
 * Return: integer
*/

int square(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (square(n, v + 1));
	else
		return (-1);
}
