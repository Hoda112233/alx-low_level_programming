#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - Prints a dog's information
 * @d: Pointer to struct dog to print
 *
 * Description: This function prints the name, age, and owner of a dog.
 * If a field is NULL, it prints "(nil)" instead.
*/

void print_dog(struct dog *d)
{
if (d == NULL)
return;

char *name = (d->name != NULL) ? d->name : "(nil)";
char *owner = (d->owner != NULL) ? d->owner : "(nil)";

printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
}
