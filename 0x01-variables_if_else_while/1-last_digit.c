#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - program that primts the last digit of a number
 * Return: number (victory)
 *
 */

int main(void)

{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 15;

	if (lastdigit > 5)
	{
	printf("lastdigit of %d is %d and is greater than 5\n", n, lastdigit);
	}
	else if (lastdigit == 0)
	{
	printf("lastdigit of %d id %d and is 0\n", n, lastdigit);
	}
	else if (lastdigit < 6 && lastdigit != 0)
	{
	printf("lastdigit of %d is %d ansd is less than 6 and not 0\n", n, lastdigit);
	}
	return (0);
}
