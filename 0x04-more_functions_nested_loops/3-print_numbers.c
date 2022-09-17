#include "main.h"

/**
 * print_numbers - Function to print numbers between 0 and 9
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
