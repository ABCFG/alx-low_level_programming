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

	for (n = 0; n < 9; n++)
	{
		if ((n == 2 || n == 4))
		{
			continue;
		}
		purchar(n);
	}
	putchar('\n');
}
