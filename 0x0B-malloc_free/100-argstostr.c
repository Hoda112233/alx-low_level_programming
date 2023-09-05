#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: The argument count.
 * @av: Array of strings containing the arguments.
 *
 * Return: A pointer to a new string, or NULL if it fails.
*/

char *argstostr(int ac, char **av)
{
int i, j, len = 0, total_len = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
total_len += len + 1;
len = 0;
}

str = malloc(sizeof(char) * (total_len + 1));

if (str == NULL)
return (NULL);

len = 0;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
str[len++] = av[i][j];
str[len++] = '\n';
}

str[len] = '\0';

return (str);
}
