#include "main.h"

/**
* _strncpy - copies a string
* @dest: destination
* @src: string source
* @n: number of bytes from src
* Return: pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[count] = src[count];
	}
	for ( ; count < n; count++)
	{
		dest[count] = '\0';
	}

	return (dest);
}
