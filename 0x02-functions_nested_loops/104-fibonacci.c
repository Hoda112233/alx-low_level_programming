#include "main.h"

/**
 * main - Entry point
 *
 * Description: Generates and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line. Numbers are separated
 * by a comma and space. The program adheres to the specified constraints,
 * utilizing the standard library without using long long, malloc,
 * pointers, arrays/tables, or structures.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, nextFib;
	int count;

	printf("%.0f, %.0f", fib1, fib2);

	for (count = 2; count < 98; count++)
	{
		nextFib = fib1 + fib2;
		printf(", %.0f", nextFib);

		fib1 = fib2;
		fib2 = nextFib;
	}
	printf("\n");
	return (0);
}
