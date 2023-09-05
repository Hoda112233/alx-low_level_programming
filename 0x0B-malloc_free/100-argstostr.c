#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: The number of arguments
 * @av: Array of argument strings
 *
 * Return: Pointer to the concatenated string, or NULL on failure
*/

char *argstostr(int ac, char **av)
{
if (ac == 0 || av == NULL)
return (NULL);

int i, j, len = 0;
char *str, *concat;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
len++;
}
len++;
}
str = malloc(len *sizeof(char) + 1);

if (str == NULL)
return (NULL);

concat = str;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
*str = av[i][j];
str++;
}
*str = '\n';
str++;
}

*str = '\0';
return (concat);
}
