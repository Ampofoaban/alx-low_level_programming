#include "main.h"
#include <stddef.h>

/**
 * _atoi - entry point
 * @s: pointer to convert
 * Return: an integer
 */

int _atoi(char *s)
{
	int d = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[d])
	{
		if (s[d] == 45)
		{
		min *= -1;
		}
		while (s[d] >= 48 && s[d] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[d] - '0');
			d++;
		}
		if (isi == 1)
		{
			break;
		}
		d++;
	}
	ni *= min;
		return (ni);
}


