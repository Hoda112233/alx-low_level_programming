#include "main.h"

/**
 * print_sign - Prints the sign (+, 0, or -) of a number.
 *
 * @n: The number to check.
 *
 * Return: 1 (+) if n is positive
 * 0 (0) if n is zero
 * -1 (-) if n is negative.
 *
 * Description: This function prints the sign and returns a value
 * based on the sign of n.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
