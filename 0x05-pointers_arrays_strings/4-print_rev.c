#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Function to reverse a string
 * @s: the string
 *
 * Return: Always 0;
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
