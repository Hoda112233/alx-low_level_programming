#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic letter.
 *
 * @c: The character to check.
 *
 * Return: 1 if c is an alphabetic letter, else 0.
 *
 * Description: Determines if c is a letter
 * (lowercase or uppercase).
 * Similar to isalpha from standard library
 * see 'man isalpha'.
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1)
			return (0)
}
