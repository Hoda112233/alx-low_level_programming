#include "main.h"

/**
 * print_diagonal - a function draws a diagonal line on the terminal
 *
 * @n: the number of times the character \ should be printed
 *
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	return;
	}

	int p, s;

	for (p = 0; p <= n; p++)
	{
		{
			for (s = 0; s <= p; s++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
