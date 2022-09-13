#include "main.h"


/**
 * _isalpha - Function to return 1 if it's an alphabet and 0 otherwise
 * @c: is then int for the function argument
 * Return: 0
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
