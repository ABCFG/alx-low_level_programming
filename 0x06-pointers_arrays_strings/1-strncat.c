#include "main.h"
#include <stdio.h>

/**
 * *_strncat - Function to concatenate strings
 * @dest: destination string
 * @src: source string
 * @n: n string
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, co;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (co = 0; co < n; co++)
	{
		dest[i + co] = src[co];
	if (src[co] == '\0')
		co = n;
	}
	return (dest);
}
