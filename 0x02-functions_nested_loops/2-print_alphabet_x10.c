#include "main.h"

/**
 * print_alphabet_10_times - Prints the lowercase alphabet 10 times,
 *                          each followed by a new line.
 */
void print_alphabet_10_times(void)
{
	int ch, repeat;

	for (repeat = 0; repeat < 10; repeat++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}