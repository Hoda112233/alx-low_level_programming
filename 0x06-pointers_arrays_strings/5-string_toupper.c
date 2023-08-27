#include "main.h"

/**
 * string_toupper - Converts all lowercase letters in a string
 *
 * @str: Pointer to the string to be converted
 *
 * Return: Pointer to the modified string
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
	}
	return (str);
}
