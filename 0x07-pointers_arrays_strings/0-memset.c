#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s:location to be filled
 * @b: character to be filled
 * @n:number of byte  to fill
 *
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
