#include "main.h"

/**
 * print_sign - Function to return number sign of +,-, and 0
 * @n: this int will execute for n argument in the function
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
