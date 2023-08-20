#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	int ch, repeat;

	for (repeat = 0; repeat <= 9; repeat++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
