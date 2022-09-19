#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - Function to print elemnt of an array of integers
 * @a: array
 * @n: number of elements
 *
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int et;

	for (et = 0; et < n; et++)
	{
		if (et != n - 1)
			printf("%d, ", a[et]);
		else
			printf("%d", a[et]);
	}
	putchar(10);
}
