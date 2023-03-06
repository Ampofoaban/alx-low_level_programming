#include "main.h"


/**
 * _memcpy - function that copies memory area
 * @src: source
 * @dest: destination
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; i++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
