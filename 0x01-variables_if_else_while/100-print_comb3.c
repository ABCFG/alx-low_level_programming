#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always Success
 */
int main(void)
{
int l1;
int l2;
for (l1 = 1; l1 <= 10; l1++)
{
	for (l2 = 1; l2 <= 10; l2++)
	{
		putchar(l1 % 10 + '0');
		putchar(l2 % 10 + '0');

		if (l1 == 99 && l2 == 99)
			break;

		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
