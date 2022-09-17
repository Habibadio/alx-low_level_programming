#include "main.h"

/**
 * isupper -Description to check if character is uppercase or not
 *@c: The character to print
 *
 * Return: return 1 if c is a capital letter
 * return 0 if it is not
 */
int _isupper(int c)

{
	if ((c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
