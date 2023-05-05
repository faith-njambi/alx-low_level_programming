#include "main.h"

/**
 * string_toupper - change lowercase letters to uppercase
 * @s: input string.
 * Return: pointer to dest
 */
char *string_toupper(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		/* a=97 to A=65  ... z=122 to Z=90 */
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
		count++;
	}

	return (s);
}
