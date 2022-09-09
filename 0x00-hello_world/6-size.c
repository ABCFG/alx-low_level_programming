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

	long int c;

	long long int b;

	float f;

	printf("size of char: %lu byte(s)\n", sizeof(d));
	printf("size of int : %lu byte(s)\n", sizeof(a));
	printf("size of a long int: %lu byte(s)\n", sizeof(c));
	printf("size of long: %lu byte(s)\n", sizeof(b));
	printf("size of float: %lu byte(s)\n", sizeof(f));
	return (0);
}
