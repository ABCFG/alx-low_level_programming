#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - Function to copy string
 * @dest: destination
 * @src: source
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	char *guard = dest;

	while (*src)
	{
	*dest++;
	*dest = 0;
	}
	return (guard);
}
