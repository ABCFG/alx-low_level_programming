#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initilizesit with specific char
 * @size: size of the array.
 * @c: char to initializes array with.
 *
 * Return: Null if it fails or pointer to array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	/* check if malloc was successful */
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
