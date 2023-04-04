#include "main.h"

/**
 * _strchr - locate character in a string
 * @a: char array string
 * @b: char to look for
 * Return: NULL if char not found, or pointer to first occurrence of char `b`
 */
char *_strchr(char *a, char b)
{
	while (*a != '\0')
	{
		if (*a == b)
			return (a);
		else if (*(a + 1) == b)
			return (a + 1);
		a++;
	}

	return (a + 1);
}
