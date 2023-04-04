#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 * @b: char string array
 * @accept: char array to check bytes with
 * Return: Number of bytes in the intial segment of `b`
 */
unsigned int _strspn(char *b, char *accept)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;

	while (b[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (b[i] == accept[j])
			{
				k++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (k);
}
