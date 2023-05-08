#include <stddef.h>
#include "main.h"

/**
* *_strchr - locates a character in a string
* @s: the string
* @c: character to be located
* Return: pointer to the first occurrence of c
* NULL if c is not found
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
