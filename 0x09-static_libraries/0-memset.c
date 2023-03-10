#include "main.h"

/**
 * _memset - fill a block of memory with a constant value
 * @s: start address of memory
 * @b: desried value
 * @n: number of bytes
 * Return: a new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
