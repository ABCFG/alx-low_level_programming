#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Function to print a diagonal line on the terminal
 * @n: The number of times to input '\'
 * Return: a diagonal line
 */

void print_diagonal(int n)
{
	int lines, m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lines = 1; lines <= n; lines++)
		{
			for (m = 1; m <= lines; m++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
