#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - entry point
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: void
=======

/**
 * _strncat - concatenate two strings using n bytes from src
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: dest
>>>>>>> b3b2589405054eb3a869fb446356852f371b35a7
 */

char *_strncat(char *dest, char *src, int n)
{
<<<<<<< HEAD
	return (strncat(dest, src, n));
}
=======
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';

	return (dest);
}

>>>>>>> b3b2589405054eb3a869fb446356852f371b35a7
