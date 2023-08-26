#include "main.h"
#include <stdio.h>

/**
 * multiply - Multiplies two integers.
 *
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of the two integers.
*/

int multiply(int a, int b)

{
return (a * b);
}

int main(void)
{
	int num1 = 5;
	int num2 = 7;
	int result = multiply(num1, num2);
printf("The product of %d and %d is %d\n", num1, num2, result);
return (0);
}
