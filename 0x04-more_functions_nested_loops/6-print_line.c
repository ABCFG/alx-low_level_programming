#include "main.h"
#include <stdio.h>


/**
 * print_line - function to print strt line
 * @n: input number of times to print '_'
 * Return: a straight line
 */

void print_line(int n)
{
	int line;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 1; line <= n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
