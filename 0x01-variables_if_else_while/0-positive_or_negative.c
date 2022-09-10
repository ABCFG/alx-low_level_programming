#include <stdlib.h>
#include <time.h>

/**
 * main - print if the number is positive, negative or zero
 *
 * Return: return 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = srand() - RAND_MAX / 2;

	if (n > 0)
		prinf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		print("%d is negative\n", n);
	return (0);
}
