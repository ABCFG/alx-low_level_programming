#include<stdio.h>
#include<unistd.h>

/**
 * main - the main function to start the execution of the program
 *
 * Return: return 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}