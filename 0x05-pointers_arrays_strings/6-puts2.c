#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *puts2 - Function to print every character
 *@str: character in a string
 *
 * Return: Always 0
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
