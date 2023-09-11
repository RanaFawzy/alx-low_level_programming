#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct doggg
 * @d: pointer to struct dog to initializeee
 * @name: name to initializeee
 * @age: age to initializeee
 * @owner: owner to initializeee
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
