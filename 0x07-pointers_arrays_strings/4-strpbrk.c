#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 *
 * @s: The string to be searched
 * @accept: The string containing the bytes to search for
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;
	char *p = NULL;

	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
			{
				p = &s[x];
				return (P);
			}
			y++;
		}
		x++;
	}
	return (p);
}
