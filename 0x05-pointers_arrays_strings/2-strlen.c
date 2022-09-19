#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen - Function to print the length of a string
 * @s: parameter for the string
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
