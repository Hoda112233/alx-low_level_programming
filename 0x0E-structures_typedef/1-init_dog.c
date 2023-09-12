#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to struct dog to initialize
 * @name: The name to initialize
 * @age: The age to initialize
 * @owner: The owner to initialize
 *
 * Description: This function initializes a struct dog with the provided
 * name, age, and owner. If 'd' is NULL, it allocates memory for the struct.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}
