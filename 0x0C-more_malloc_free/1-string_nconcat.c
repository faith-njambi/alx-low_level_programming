#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatenates two strings
* @s1: the first string
* @s2: the second string
* @n: number of bytes of s2
* Return: pointer to the newly allocated space
* NULL on function fail
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int s1_len;
	unsigned int s2_len;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;

	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;

	s3 = (char *)malloc(s1_len + n + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[i] = s1[i];
	}
	
	for (j = 0; j < n; j++)
	{
		s3[i] = s2[j];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
