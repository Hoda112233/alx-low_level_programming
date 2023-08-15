#include "main.h"

/**
 * main - starting
 *
 * Description: a code that prints _putchar
 * followed by new line using C language
 *
 * Return: 0 if succeed
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
			_putchar('\n');
	return (0);
}
