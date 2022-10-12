#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allolcates memory using malloc
 * @b: memory to allocate
 *
 * Return: pointer to allocated memoty or normal process termination if error
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}