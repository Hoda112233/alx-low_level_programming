#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
*/

int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}

int cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

int coins[] = {25, 10, 5, 2, 1};
int coin_count = 0;
int i = 0;

while (cents > 0)
{
if (cents >= coins[i])
{
cents -= coins[i];
coin_count++;
}
else
{
i++;
}
}

printf("%d\n", coin_count);
return (0);
}
