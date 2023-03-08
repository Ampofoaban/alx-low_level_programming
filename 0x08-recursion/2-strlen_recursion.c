#include "main.h"

/**
 * _strlen_recursion - prints length of the string
 * @s: string to be printed
 * Return: a
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a++;
		a += _strlen_recursion(s + 1);
	}
	return (a);
}
