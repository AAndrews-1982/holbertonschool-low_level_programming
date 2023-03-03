#ifndef dog_h
#define dog_h
/**
 * struct dog - a dog's basic information
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner's name
 *
 * Description: contains the basic information about a dog
 */

struct dog
{
	char *name, *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
