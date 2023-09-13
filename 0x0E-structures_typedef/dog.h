#ifndef _DOG_DETAILS
#define _DOG_DETAILS

/**
 * struct dog - a new data type that contains details of a dog
 * @name: string value for name of the dog
 * @age: float value for age of the dog
 * @owner: string value for name of the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
