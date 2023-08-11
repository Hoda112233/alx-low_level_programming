#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all alphabet letters except q and e
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
