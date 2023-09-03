#include "main.h"
#include <stdio.h>

/**
 * check_prime - Recursive helper function to check if a number is prime
 * is_prime_number - Checks if a number is prime
 *
 * @n: The integer to be checked
 * @t: The current divisor to check if n is divisible by
 *
 * Return: 1 if n is prime, 0 otherwise
*/

int check_prime(int n, int t)
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - Recursive helper function to check if a number is prime
 * is_prime_number - Checks if a number is prime
 *
 * @n: The integer to be checked
 * @t: The current divisor to check if n is divisible by
 *
 * Return: 1 if n is prime, 0 otherwise
*/

int check_prime(int n, int t)
{
	if (t >= n && n > 1)
		return (1);

	else if (n % t == 0 || n <= 1)
		return (0);

	return (check_prime(n, t + 1));
}
