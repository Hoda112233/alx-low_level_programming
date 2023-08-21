#include "main.h"

/**
 * main - Entry point for computing and printing the sum of multiples.
 *
 * Description: This program calculates and prints the sum of natural numbers
 * that are multiples of 3 or 5, excluding 1024. It showcases how to find and
 * sum multiples within a specified range. Standard library is utilized.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num, sum;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
