#include "main.h"
#include <stdio.h>

/**
 * _puts - Function to print string follow by a new line
 * @str: the string
 *
 *Return: Always 0
 */

void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		putchar(str[j]);
	}
	putchar('\n');
}
