#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program using sizeof
 *
 * Return: Alaways 0 (Success)
*/

int main(void)
{
	printf("size of a chart: %u byte(s)\n", sizeof(char));
	printf("size of an int: %u byte(s)\n", sizeof(int));
	printf("size of a long  int: %u byte(s)\n", sizeof(long int));
	printf("size of a long long int: %u byte(s)\n", sizeof(long long int));
	return (0);
}
