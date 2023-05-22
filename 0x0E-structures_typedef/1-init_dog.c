#include <stdio.h>
#include "dog.h"

/**
* init_dog - initialize a variable of type struct dog
* @d: struct to initialize
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Description: struct of a dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
