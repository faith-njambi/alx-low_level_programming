#include "main.h"

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
