#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - entry point
 * @b: charcter input
 * @n:number of bytes
 * @s: pointer
 * Return: void
=======

/**
 * _memset - fill a block of memory with a constant value
 * @s: start address of memory
 * @b: desried value
 * @n: number of bytes
 * Return: a new value
>>>>>>> b3b2589405054eb3a869fb446356852f371b35a7
 */

char *_memset(char *s, char b, unsigned int n)
{
<<<<<<< HEAD
	return (memset(s, b, n));
=======
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
>>>>>>> b3b2589405054eb3a869fb446356852f371b35a7
}
