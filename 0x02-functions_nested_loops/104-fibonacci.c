#include "main.h"

/**
 * numLength - Returns the length of a number in digits.
 *
 * @num: The number for which to find the length.
 *
 * Return: The number of digits in the given number.
 */

int numLength(int num)
{
	int length = 0;

	if (num == 0)
		return (1);

	while (num)
	{
		num = num / 10;
		length++;
	}
	return (length);
}

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers starting with 1 and 2,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count, initial0s;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, flo = 0, f20 = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (flo > 0)
		{
			printf("%lu", flo);
			initial0s = numLength(mx) - numLength(f1);
			while (flo > 0 && initial0s > 0)
			{
				printf("0");
				initial0s--;
			}
			printf("%lu", f1);
		}
		else
		{
			printf("%lu", f1);
		}
		sum = (f1 + f2) % mx;
		sumo = flo + f20 + (f1 + f2) / mx;

		f2 = sum;
		f1 = f2;
		flo = f20;
		f20 = sumo;

		if (count == 98)
			printf(", ");
		else
			printf("\n");

	}
	return (0);
}
