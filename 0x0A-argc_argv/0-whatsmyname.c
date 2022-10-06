#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name
 * @argc: argument counts
 * @argv: argument vector
 *
 * Return: return 0
 */

int main(int argc, char *argv[])

{

	printf("argc = %d\n", argc);
	printf("\"%s\".\n", argv[0]);

	return (0);
}
