#include<stdio.h>

/**
 * main - Entry point
 *
 * Return - Return (0) success
 */
int main(void)
{
	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(long));
	printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(long long));
	printf("size of float: %u byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
