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
char *concatenated;
int len1 = 0, len2 = 0, i;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = _strlen(s1);
len2 = _strlen(s2);
concatenated = malloc((len1 + len2 + 1) * sizeof(char));

if (concatenated == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concatenated[i] = s1[i];

for (i = 0; i <= len2; i++)
concatenated[i + len1] = s2[i];

return (concatenated);
}
