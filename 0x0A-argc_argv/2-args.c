#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: argument counts
 * @argv: array containing all strings of command
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])

{
	int i;

	if (argc == 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
		}
	}
	return (0);
}
