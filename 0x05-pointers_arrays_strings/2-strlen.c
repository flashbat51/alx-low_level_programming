#include "main.h"

/**
 *  *_strlen - finds the length of a string
 *   *
 *    *@s: variable to find its length
 *     *
 *      *Return: return the length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s++ != '\0')
		count++;
	return (count);
}
