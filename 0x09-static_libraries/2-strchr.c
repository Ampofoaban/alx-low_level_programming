#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strchr - entry point
 * @c: charcter
 * @s: pointer
 * Return: void
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
=======
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
>>>>>>> b3b2589405054eb3a869fb446356852f371b35a7
}
