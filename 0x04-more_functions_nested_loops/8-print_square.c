#include "main.h"


/**
 * print_square - a function to print a square, followed by a new line
 * @size: size of both width and length
 *
 * Return: square of '#'
 */
void print_square(int size)
{
	int l, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l <= size; l++)
		{
			_putchar('#');
			for (m = 2; m <= size; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
