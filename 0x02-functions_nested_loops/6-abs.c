#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @n: The integer to calculate the absolute value of.
 *
 * Return: The absolute value of n.
 *
 * Description: Calculates and returns the absolute value
 * of the given integer n.
 * Similar to abs from standard library; see 'man abs' for details.
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
