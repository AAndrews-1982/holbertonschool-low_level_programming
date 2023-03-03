#define dog_h

#include <stdlib.h>

/**
 * struct dog - a dog's basic information
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner's name
 *
 * Description: contains the basic information about a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}	dog_t;

