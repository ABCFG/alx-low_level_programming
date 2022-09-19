#include "main.h"
#include <stdio.h>

/**
 * swap_int - Function to swap two given numbers a & b
 * @a: First number
 * @b: Second number
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
