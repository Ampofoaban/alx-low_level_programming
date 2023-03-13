#include <stdio.h>
#include "main.h"

/**
 * main - print a program that prints its name
 * @argc: count arguments
 * @argv: counts chars in arguments
 * Return: 0 (victory)
 */

int main(int argc, char *argv[])
{
	(void)argc;
		printf("%s\n", argv[0]);
		return (0);
}
