#include "main.h"

/**
 * main - Entry point
 *
 * Description: Generates and prints the first 50 Fibonacci nums,
 * starting with 1 and 2. Shows the sequence and its calculation
 * using standard library.
 * Return: Alaways 0 (success)
*/

int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, nextFib;

	printf("%llu, %llu", fib1, fib2);

	for (int i = 2; i < 50; i++)
	{
		nextFib = fib1 + fib2;
		printf(", %llu", nextFib);

		fib1 = fib2;
		fib2 = nextFib;

	}
	printf("\n");
	return (0);
}
