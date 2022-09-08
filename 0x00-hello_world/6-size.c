#include<stdio.h>
/**
 * main - Entry point
 *
 * Return - Return (0) success
 */
int main(void)
{
	int a;

	long int b;	

	long long int c;

	char d;

	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
        printf("size of float: %u byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
