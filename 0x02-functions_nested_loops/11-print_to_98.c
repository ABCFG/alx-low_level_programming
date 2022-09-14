#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Function to print natural numbers from 0 t0 98
 * @n: the number that will be counting
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}




