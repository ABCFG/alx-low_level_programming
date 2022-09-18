#include "main.h"

/**
 * print_line - function to print strt line
 * @n: is the parameter in the function
 *
 * Return: Always 0
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
		for (line = 0; line <= n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
