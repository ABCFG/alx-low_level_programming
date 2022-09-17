#include "main.h"

/**
 * _isdigit - function to checks for digit btw 0 and 9
 * @c: is the parameter for the function
 * Return: 0;
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
