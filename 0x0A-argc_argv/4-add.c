#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always (Success)
 */
int check_num(char *str)
{
	/* Declaring variable */
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /* count string*/
	{
		if (!isdigit(str[count])) /*check if str there are digit */
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - print the name of the program
 * @argc: count argument
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);

	return (0);
}
