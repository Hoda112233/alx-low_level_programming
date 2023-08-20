#include "main.h"

/**
 * A function that checkes if the character is lowercase
 *
 * Return: 1 incase of lowercase
 *
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
