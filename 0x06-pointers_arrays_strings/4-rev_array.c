#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Function to reverse a string
 * @a: an array of integers
 * @n: the number of element to swap
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, rev;

	for (i = 0; i < n; i++)
	{
		n--;
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
	}
}
