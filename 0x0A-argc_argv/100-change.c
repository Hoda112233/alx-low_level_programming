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
	if (argc == 2)
	{
		int i, totalCoins = 0, amount = atoi(argv[1]);
		int cents[] = {25, 10, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (amount >= coinValues[i])
			{
				totalCoins += amount / coinValues[i];
				amount = amount % coinValues[i];
			}

			if (amount % coinValues[i] == 0)
			{
				break;
			}
		}
		printf("%d\n", totalCoins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
