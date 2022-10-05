#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print - a program that prints its name
 * @argc: argument counts
 * argv: argument vector
 *
 * Return: return 0
 */

int main (int argc, char *argv[])

{
	int i;
	
	printf("This was called with \"%s\".\n", argv[0]);

	if (argc > 1)
	{
		for ( i = 1; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
		}
	}

	else
	{
		printf("No other comments.\n");
	}
	return (0);
}
