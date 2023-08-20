#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if c is lowercase, otherwise 0.
 *
 * Description: This function determines if
 * a given character is a lowercase letter.
 * It returns 1 if the character is lowercase ('a' to 'z')
 * and 0 otherwise.
 *
*/


int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
