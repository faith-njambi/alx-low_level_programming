#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
* new_dog - creates new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: NULL on function fail
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t name_len = _strlen(name) + 1;
	size_t owner_len = _strlen(owner) + 1;

	dog_t *newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->name = malloc(name_len);
	newDog->owner = malloc(owner_len);
	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	_strcpy(newDog->name, name);
	_strcpy(newDog->owner, owner);

	newDog->age = age;
	return (newDog);
}

/**
* strcpy - copies a string + terminating bytes
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
