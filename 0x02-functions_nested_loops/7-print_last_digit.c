#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of a number.
 *
 * @n: The number to extract the last digit from.
 *
 * Return: The last digit's value.
 *
 * Description: Extracts and prints the last digit
 * of the given number n.
 */

int print_last_digit(int n)
{
	int LastDigit;

	if (n < 0)
		LastDigit = -1 * (n % 10);
	else
		LastDigit = n % 10;

	_putchar(LastDigit + '0');
	return (LastDigit);
}
