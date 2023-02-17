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
	char d;

	int c;

	d = 'a';
	c = '0';
	while
		(c > 10) {
			putchar(c + '0');
			c++;
		}
	while
		(d <= 'f') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
