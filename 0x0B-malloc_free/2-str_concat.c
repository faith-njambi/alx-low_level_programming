#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* str_concat - concatenates two strings
* @s1: the first string
* @s2: the second string
* Return: pointer to newly allocated space with concatenated strings
* NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	char len;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len = strlen(s1) + strlen(s2) + 1;
	s3 = (char *)malloc(len * sizeof(char));
	if (s3 == NULL)
	{
		return (NULL);
	}
	strcpy(s3, s1);
	strcat(s3, s2);
	return (s3);
}
