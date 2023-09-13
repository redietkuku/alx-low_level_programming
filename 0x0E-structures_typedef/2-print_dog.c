#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_dog - function that prints s struct dog
 * @d: pointer
 *
 * Return: Always 0.
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
