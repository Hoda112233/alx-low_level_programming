#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes character c into stdout
 * @c: character to print
 *
 * Return: 1 if succeed, -1 if failed
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
