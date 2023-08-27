#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by src
 *
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: Pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = scr[i];
	} while (scr[i] != '\0');

	return (dest);
}
