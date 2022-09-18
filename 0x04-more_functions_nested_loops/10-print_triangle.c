#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Function to print a traingler
 * @size: sets the size of the triangle
 *
 * Return: returns a traingle
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (j = 1; j <= size; j++)
			{
				if (j >= i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
