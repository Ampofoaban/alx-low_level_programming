#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcmp - ebtry point
 * @s1: pointer 1
 * @s2: pointer 2
 * Return: void
=======
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
>>>>>>> b3b2589405054eb3a869fb446356852f371b35a7
 */

int _strcmp(char *s1, char *s2)
{
<<<<<<< HEAD
	return (strcmp(s1, s2));
=======
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
>>>>>>> b3b2589405054eb3a869fb446356852f371b35a7
}
