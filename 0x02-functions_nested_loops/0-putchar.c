#include<main.h>
#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always Success
 */
int main(void)
{
	char *s = "_putchar";

	while (*s)
	{
		putchar(*s);
	}
	putchar('\n');
	return (0);
}
