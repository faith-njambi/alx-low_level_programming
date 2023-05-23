#include <stdlib.h>
#include "dog.h"

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
* new_dog - creates new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: NULL on function fail
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len = 0, owner_len = 0;
	dog_t *my_dog;

	if (name != NULL && owner != NULL)
	{
		name_len = _strlen(name) + 1;
		owner_len = _strlen(owner) + 1;
		my_dog = malloc(sizeof(dog_t));

		if (my_dog == NULL)
			return (NULL);

		my_dog->name = malloc(sizeof(char) * name_len);
		my_dog->owner = malloc(sizeof(char) * owner_len);

		if (my_dog->name == NULL)
		{
			free(my_dog);
			return (NULL);
		}

		if (my_dog->owner == NULL)
		{
			free(my_dog->name);
			free(my_dog);
			return (NULL);
		}

		my_dog->name = _strcpy(my_dog->name, name);
		my_dog->owner = _strcpy(my_dog->owner, owner);
		my_dog->age = age;
	}
	else
	{
		return (NULL);
	}

	return (my_dog);
}

/**
* _strcpy - copies a string + terminating bytes
* @dest: destination
* @src: string source
* Return: success
*/
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}

/**
* _strlen - returns the length of a string
* @s: character to be checked
* Description: Return length of a string
* Return: 0
*/
int _strlen(char *s)
{
	int counter = 0;

	while (*s++)
		counter++;
	return (counter);
}
