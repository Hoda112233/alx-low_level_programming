#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10
 *		starting from 0, followed by a new line.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar('0' + digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
