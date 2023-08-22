#include <unistd.h>

/**
 * _putchar- writes the character c to stdout
 * @c: the character written by _putchar
 *
 * Return: 1 (success)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
