#include "main.h"

/**
 * print_square - a function that prints a square using #
 * followed by a new line
 *
 * @size: size of square
 *
 * Return: 0 if succeed
*/

void print_square(int size)
{
	int row, col;

	for (row = 1, row <= size; row++)
	{
		for (col = 1; col <= size; col++)
			_putchar('#');
		_putchar('\n');
	}
}
