#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - Functuion to convert lower case to upper case
 * @n: n string
 * Return: Always 0
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}
