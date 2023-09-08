#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array and initialize it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory, or NULL if allocation fails.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL);

for (i = 0; i < (nmemb * size); i++)
*((char *)ptr + i) = 0;

return (ptr);
}
