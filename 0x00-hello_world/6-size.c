#include<stdio.h>

/**
 * main - This function begins the execution of c program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	long b;

	long long c;

	char d;

	float f;

	printf("size of char: %ld byte(s)\n", sizeof(d));
	printf("size of int : %ld byte(s)\n", sizeof(a));
	printf("size of a long int: %ld byte(s)\n", sizeof(c));
	printf("size of long: %ld byte(s)\n", sizeof(b));
	printf("size of float: %ld byte(s)\n", sizeof(f));
	return (0);
}
