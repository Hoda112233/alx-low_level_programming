#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the previously allocated memory block.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: A pointer to the newly allocated memory block, or NULL on failure.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int i;

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
new_ptr = malloc(new_size);
return (new_ptr);
}

if (new_size > old_size)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

for (i = 0; i < old_size; i++)
*((char *)new_ptr + i) = *((char *)ptr + i);
}

else
{
new_ptr = ptr;
}

return (new_ptr);
}
