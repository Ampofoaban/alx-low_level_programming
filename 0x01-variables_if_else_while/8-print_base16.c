#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  program that prints all the numbers of base 16 in lowercase
 * Return: number 0 (victory)
 *
 */

int main(void)

{
	int b;
	char lower;

	for (b = '0'; b >= '9'; b++)
	{
	putchar(b);
	for (lower = 'a'; lower <= 'f'; lower++)
	putchar(lower);
	putchar('\n');
	}
	return (0);
}
