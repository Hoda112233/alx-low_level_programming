#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Alaways 0 (Succes)
*/

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');
	return (0);
}
