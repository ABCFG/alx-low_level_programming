#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always Success
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha != 'q' && alpha != 'e')
{
	putchar(alpha);
}
}
putchar('\n');
return (0);
}
