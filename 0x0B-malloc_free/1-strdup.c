#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* _strdup - returns pointer to a newly allocated space in memory
* @str: string
* Return: NULL if str = NULL
*/
char *_strdup(char *str)
{
	char *str2;
	char len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str) + 1;
	str2 = (char *)malloc(len * sizeof(char));
	if (str2 == NULL)
	{
		return (NULL);
	}
	strcpy(str2, str);
	return (str2);
}
