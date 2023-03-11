#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memcpy - entry point
 * @dest: destination
 * @src: source
 * @n: no. of bytes
 * Return: void
=======

/**
 * _memcpy - a function that copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: copied memory with n bytes changed
>>>>>>> b3b2589405054eb3a869fb446356852f371b35a7
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
<<<<<<< HEAD
	return (memcpy(dest, src, n));
=======
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
>>>>>>> b3b2589405054eb3a869fb446356852f371b35a7
}
