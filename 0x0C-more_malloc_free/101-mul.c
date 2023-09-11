#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 if successful, 98 if incorrect arguments or non-integer input.
*/

int is_positive_integer(char *str)
{
for (int i = 0; str[i] != '\0'; i++)
{
if (!isdigit(str[i]))
{
return (0);
}
}
return (1);
}
/**
 * main - Multiplies two positive numbers.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 if successful, 98 if incorrect arguments or non-integer input.
*/

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (98);
}

if (!is_positive_integer(argv[1]) || !is_positive_integer(argv[2]))
{
printf("Error\n");
return (98);
}

int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);

int result = num1 * num2;

printf("%d\n", result);

return (0);
}
