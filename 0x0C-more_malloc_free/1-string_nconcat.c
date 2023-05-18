#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* string_nconcat - concatenates two strings
* @s1: the first string
* @s2: the second string
* Return: pointer to the newly allocated space
* NULL on function fail
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	s3 = (char *)malloc((strlen(s1) + n + 1) * sizeof(char));
	if (s3 == NULL)
	{
		return (NULL);
	}
	strcpy(s3,s1);
	strcat(s3,s2);
	return (s3);
}
