#include "main.h"

/**
 * _islower - Function to detect lower case and return 0 otherwise
 * @c: is the int that will be use for the argument of the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
