#include "main.h"

/**
*more_numbers - print number 1-14 ten times
*_putchar to be use not morethan 3times
*Return: return from 1-14 ten times follow by new line
*/
void more_numbers(void)
{
	int r, a;

	for (r = 0; r < 10; r++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (r >= 10)
			{
				_putchar((r / 10) + '0');
			}
			_putchar((r % 10) + '0');
		}
		_putchar('\n');
	}
}
