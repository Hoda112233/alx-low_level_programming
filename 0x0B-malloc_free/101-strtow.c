#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
*/

int count_words(char *str)
{
int count = 0;
bool in_word = false;

for (int i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ')
{
if (!in_word)
{
count++;
in_word = true;
}
}
else
{
in_word = false;
}
}

return (count);
}

/**
 * strtow - Split a string into words.
 * @str: The input string.
 *
 * Return: An array of strings containing the words, or NULL if failed.
*/

char **strtow(char *str)
{
if (str == NULL || *str == '\0')
return (NULL);

int word_count = count_words(str);
if (word_count == 0)
return (NULL);

char **words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

int word_index = 0;
char *token = strtok(str, " ");

while (token != NULL)
{
words[word_index] = strdup(token);
if (words[word_index] == NULL)
{
for (int i = 0; i < word_index; i++)
free(words[i]);
free(words);
return (NULL);
}

word_index++;
token = strtok(NULL, " ");
}

words[word_index] = NULL;
return (words);
}
