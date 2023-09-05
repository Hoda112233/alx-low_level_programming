#include "main.h"

/**
 * wrdcnt - Count the number of words in a string.
 * @s: The string to count words in.
 *
 * Return: The number of words in the string.
*/

int wrdcnt(char *s)
{
int n = 0;
int i = 0;

while (s[i])
{
while (s[i] == ' ')
i++;

if (s[i] && s[i] != ' ')
{
n++;

while (s[i] && s[i] != ' ')
i++;
}
}

return (n);
}

/**
 * strtow - Split a string into words.
 * @str: The string to split.
 *
 * Return: An array of words, or NULL on failure.
*/

char **strtow(char *str)
{
int i, j, k, wc = 0;
char **w;

if (str == NULL || *str == '\0')
return (NULL);

wc = wrdcnt(str);
if (wc == 0)
return (NULL);

w = (char **)malloc((wc + 1) * sizeof(char *));
if (w == NULL)
return (NULL);

w[wc] = NULL;

i = 0;
while (str[i])
{
while (str[i] == ' ')
i++;

if (str[i] && str[i] != ' ')
{
j = i;
while (str[j] && str[j] != ' ')
j++;
w[wc - 1] = (char *)malloc((j - i + 1) * sizeof(char));
if (w[wc - 1] == NULL)
{
for (k = 0; k < wc - 1; k++)
free(w[k]);
free(w);
return (NULL);
}

for (k = 0; k < j - i; k++)
w[wc - 1][k] = str[i + k];
w[wc - 1][k] = '\0';

wc--;
i = j;
}
}

return (w);
}
