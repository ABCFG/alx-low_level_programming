#include<stdio.h>

/**
 * main - This function begins the execution of c program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d;

	int a;

	long c;

	long long b;

	float f;

	printf("size of char: %ld byte(s)\n", (unsigned long)sizeof(d));
	printf("size of int : %ld byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a long int: %ld byte(s)\n", (unsigned long)sizeof(c));
	printf("size of long: %ld byte(s)\n", (unsigned long)sizeof(b));
	printf("size of float: %ld byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
