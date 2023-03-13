#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that multiplies two numbers.
 * @argv: arguments
 * @argc: counts arguments
 * Return: 1 if false and 0 if true
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
