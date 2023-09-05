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
 * alloc_word - Allocate memory for a word and copy it.
 * @start: The start of the word.
 * @end: The end of the word.
 *
 * Return: A newly allocated word.
*/

char *alloc_word(char *start, char *end)
{
int len = end - start;
char *word = (char *)malloc((len + 1) * sizeof(char));
int i;

if (word == NULL)
return (NULL);

for (int i = 0; i < len; i++)
word[i] = start[i];
word[len] = '\0';

return (word);
}

/**
 * strtow - Split a string into words.
 * @str: The string to split.
 *
 * Return: An array of words, or NULL on failure.
*/

char **strtow(char *str)
{
if (str == NULL || *str == '\0')
return (NULL);

int word_count = wrdcnt(str);
if (word_count == 0)
return (NULL);

char **words = (char **)malloc((word_count + 1) * sizeof(char *));
int word_index = 0;
int i = 0;

if (words == NULL)
return (NULL);

words[word_count] = NULL;

while (str[i])
{
while (str[i] == ' ')
i++;

if (str[i] && str[i] != ' ')
{
char *start = &str[i];
while (str[i] && str[i] != ' ')
i++;
char *end = &str[i];
words[word_index] = alloc_word(start, end);
if (words[word_index] == NULL)
{
for (int j = 0; j < word_index; j++)
free(words[j]);
free(words);
return (NULL);
}
word_index++;
}
}

return (words);
}
