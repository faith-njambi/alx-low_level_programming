#include "dog.h"

/**
* free_dog - frees dog
* @d: dogto free
* Return: success
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
}
