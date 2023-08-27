#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 *
 * @s: Pointer to the string to be encoded
 *
 * Return: Pointer to the encoded string
*/

char *rot13(char *s)
{
	char *ptr = s;
	int i;

	char *before = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *after = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		char *beforePtr = before;
		char *afterPtr = after;
		int found = 0;

		while (*beforePtr)
		{
			if (s[i] == *beforePtr)
			{
				*s = *afterPtr;
				found = 1;
				break;
			}
			beforePtr++;
			afterPtr++;
		}

		if (!found)
		{
			*s = s[i];
		}
		s++;
	}
	return (ptr);
}
