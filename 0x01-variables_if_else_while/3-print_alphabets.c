#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - lower and uppercase alphabets
 * Return: alphabets (victory)
 *
 */

int main(void)

{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	putchar(lower);

	for (lower = 'A'; lower <= 'Z'; lower++)
	putchar(lower);
	putchar('\n');

	return (0);
}
