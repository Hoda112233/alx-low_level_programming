#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the value of number and status
 *		greater than or equal zero or not not less than 6
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n, digit;

	srand(time(0));
	digit = n % 10;
	n = rand() - RAND_MAX / 2;

	if (digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, digit);
	else if (digit < 6 && digit != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);
	return (0);
}