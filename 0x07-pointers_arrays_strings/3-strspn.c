#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: The string to be checked
 * @accept: The string containing the characters to match against
 *
 * Return: The number of bytes in the initial segment of s consisting
 *         only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (len);
}
