#include "main.h"

/**
 * print_numbers - a function that prints the numbers
 * from 0 to 9, followed by a new line
 *
 * Return: 0 if succeed
*/

void print_numbers(void)
{
	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
