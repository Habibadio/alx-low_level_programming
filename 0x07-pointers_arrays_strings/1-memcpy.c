#include "main.h"

/**
 * _memcpy - function that copy from one memory
 * @dest: destination memory
 * @src: source memory to be copy from
 * @n: number of bytes to be copy
 *
 * Return: always return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}


