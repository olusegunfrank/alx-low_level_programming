#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;
	long int s;
	long long int t;
	char u;
	float y;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(u));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(r));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(s));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(t));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(y));
	return (0);
}
