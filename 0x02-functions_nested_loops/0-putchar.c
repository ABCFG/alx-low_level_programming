#include "main.h"
#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always Success
 */
void main(void)
{
	char *complete = "_putchar";

	while (*complete)
	{
		putchar(*complete);
	}
	putchar('\n');
	return (0);
}
