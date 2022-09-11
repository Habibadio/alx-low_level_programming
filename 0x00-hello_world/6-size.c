#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;
	long int l;
	long long int m;
	char n;
	float p;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(p));
	return (0);
}






