#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 * Return: reversealphabets (victory)
 *
 */

int main(void)

{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
	putchar(lower);
	putchar('\n');

	return (0);
}
