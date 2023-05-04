#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: the first string
* @src: the second string
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	return (dest);
}
