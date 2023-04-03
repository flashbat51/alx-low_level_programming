#include "main.h"

/**
 *  _memset - Fills memory with a constant byte
 *  @s: buffer array
 *  @b: constant byte
 *  @n: number of bytes of memory area to fill
 *  Description: Fill the first `n` bytes of
 *  the memory area pointed to by `s`
 *  with the constant byte `b`.
 *  Return: Pointer to memory area `s`
 */

char *_memset(char *s, char b, unsigned int n)
{
int c;

c = 0;
while (n > 0)
{
	s[c] = b;

	c++;
	n--;
}
return (s);
}
