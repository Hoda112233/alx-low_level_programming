#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic information
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This structure represents basic information about a dog,
 * including its name, age, and owner.
*/
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
