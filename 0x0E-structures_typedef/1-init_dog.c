#include "dog.h"
#include "main.h"
#include <string.h>

/**
 * init_dog - initializes a struct dog
 * @d: pointer to the struct dog to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Description: This function initializes the members of the struct dog
 * pointed to by @d with the given values of @name, @age, and @owner.
 * If @d is NULL, the function does nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

