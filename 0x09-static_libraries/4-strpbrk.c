#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strpbrk - entry
 * @accept: detination
 * @s:  pointer
 * Return: void
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
=======
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

return ('\0');
>>>>>>> b3b2589405054eb3a869fb446356852f371b35a7
}
