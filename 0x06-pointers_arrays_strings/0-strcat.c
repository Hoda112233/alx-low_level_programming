#include "main.h"

/**
 * _strcat - Concatenates two strings
 *
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int c1, c2;

	c1 = 0;
	while (dest[c1])
		c1++;

	for (c2 = 0; src[c2]; c2++)
		dest[c1++] = src[c2];

	return (dest);
}
