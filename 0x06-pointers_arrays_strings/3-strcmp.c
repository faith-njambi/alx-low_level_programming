#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 & s2 are equal or otherwise 
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int difference = 0;

	while (difference == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		difference = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (difference);
}
