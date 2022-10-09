#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- multiply two functions
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return 1 or Error
 */
int main(int argc, char *argv[])

{
	int i;
	int mul;
	int a;
	int b;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			a = atoi(argv[1]);
			b = atoi(argv[2]);
			mul = a * b;
			printf("%d\n", mul);
			break;
		}
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}

