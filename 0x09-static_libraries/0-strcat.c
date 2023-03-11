#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcat - concatenates strings
 * @dest: destination
 * @src: source
=======

/**
 * _strcat - concatenates two string
 * dest: destination
 * src: source
>>>>>>> b3b2589405054eb3a869fb446356852f371b35a7
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
<<<<<<< HEAD
	return (strcat(dest, src));
=======
	int a;
	int b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
>>>>>>> b3b2589405054eb3a869fb446356852f371b35a7
}
