#include <stdio.h>

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
