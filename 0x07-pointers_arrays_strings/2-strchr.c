#include "main.h"
#include <stdio.h>

/**
 * _strchr -  function that locates a character in a string
 * @s: string to locate the character from
 * @c: character to locate
 *
 * Return: return character c or NULL if the character is not found
 */

char *_strchr(char *s, char c)

{
	while (*s)
	{
		if (c == *s)
			return (s);

		s++;
	}

	if (c == *s)
		return (s);
	return (NULL);
}
