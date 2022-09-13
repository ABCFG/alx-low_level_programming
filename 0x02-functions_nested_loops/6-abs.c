#include "main.h"
#include<stdio.h>

/**
 * _abs - Function to compute the absolute value
 * @c: is the int that ll be use for the function's argument
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}

