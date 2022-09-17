#include "main.h"

/**
 * _isupper -Description to check if character is uppercase or not
 *@c: The character to print
 *
 * Return: return 1 if c is a capital letter otherwise return 0
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
