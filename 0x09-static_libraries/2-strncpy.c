<<<<<<< HEAD
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncpy - entry point
 * @src: source
 * @dest: destination
 * @n: number of bytes
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
=======

#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
>>>>>>> b3b2589405054eb3a869fb446356852f371b35a7
}
