#include "main.h"

/**
 * main - Entry point
 *
 * Description: Calculates and prints the sum of even-valued terms
 * in the Fibonacci sequence, where each new term is generated by
 * adding the previous two terms. The program considers terms up
 * to 4,000,000 and displays the sum, followed by a new line.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, nextFib;
	unsigned long sum = 0;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
			sum += fib1;
		nextFib = fib1 + fib2;
		fib1 = fib2;
		fib2 = nextFib;
	}
	printf("%lu\n", sum);
	return (0);
}