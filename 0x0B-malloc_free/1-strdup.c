#include"main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string.
 *
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the newly allocated duplicated string,
 * or NULL if memory allocation fails or str is NULL.
*/

char *_strdup(char *str)
{
int n = 0, size = 0;
char *m;

if (str == NULL)
return (NULL);

while (str[size] != '\0')
size++;

m = malloc(size *sizeof(*str) + 1);
if (m == 0)
return (NULL);
else
for (; n < size; n++)
m[n] = str[n];
return (m);
}
