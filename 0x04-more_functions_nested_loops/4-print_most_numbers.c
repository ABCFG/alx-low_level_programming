#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - function that all numbers between 0
 *
 * Return : returns 0
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if ((n == 50 || n == 52))
		{
			continue;
		}
		purchar(n);
	}
	putchar(10);
}
