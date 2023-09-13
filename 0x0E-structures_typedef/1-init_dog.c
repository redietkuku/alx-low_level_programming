#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - function that intializes a variable
 * @d: pointer to the dog structure
 * @name: pointer to the name of the dog
 * @age: pointer to the age of the dog
 * @owner: pointer to the name of the owner
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
