#include "main.h"

/**
 * infinite_add - Adds two numbers
 *
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result or 0 if result can't be stored
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int i, j;
	int len_n1 = _strlen(n1);
	int len_n2 = _strlen(n2);

	if (len_n1 > size_r || len_n2 > size_r)
		return (0);

	int index = 0;

	for (i = len_n1 - 1, j = len_n2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;

		int sum = digit1 + digit2 + carry;

		carry = sum / 10;

		r[index++] = (sum % 10) + '0';
	}

	r[index] = '\0';

	_reverse(r);
	return (r);
}
