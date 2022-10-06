#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name
 * @argc: argument counts
 * @argv: argument vector
 *
 * Return: return 0
 */
int main(int argc, char *argv[])

{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
}
