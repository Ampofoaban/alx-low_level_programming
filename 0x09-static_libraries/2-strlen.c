#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strlen - prints string length
 * @s: charcter to be printed
 * Return: void
 */

int _strlen(char *s)
{
	return (strlen(s));
=======
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
>>>>>>> b3b2589405054eb3a869fb446356852f371b35a7
}
