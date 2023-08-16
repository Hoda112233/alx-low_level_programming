#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times,
 * each followed by a new line.
 * It calls the print_alphabet function for each repetition.
 */

void print_alphabet_x10(void)
{
	int repeat;

	for (repeat = 0; repeat < 10; repeat++)
	{
		print_alphabet();
	}
}

int main(void)
{
	print_alphabet_x10();
	return (0);
}
