#include "function_pointers.h"

/**
 * print_name - a function that print a name
 * @name: the name to be printed
 * @f: function pointer
 *
 * Return: always 0
 */
void print_name(char *name, void(*f)(char *))
{
	f(name);
}
