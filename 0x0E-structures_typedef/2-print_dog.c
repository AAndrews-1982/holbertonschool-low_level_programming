/*
 * File 2-print_dog.c
 * Auth: Alton Andrews
 */

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print a dog
 * @d: dog struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (!d->owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
