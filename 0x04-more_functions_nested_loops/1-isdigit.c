#include "main.h"

/**
 * _isdigit -description to check for digits from 0 to 9
 * @c : the character to print
 *
 *Return: return 1 if digits is from 0 to 9 otherwise  0
 */
int _isdigit(int c)

{
	if ((c >= 48 && c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

