#include "main.h"
#include <stdio.h>

/**
 * *cap_string - Function to captalize each string in a sentence
 *@n: input string
 * Return: Always 0.
 */
char *cap_string(char *)
{
	int i, x;
	int cap = 32;
	int separators[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] =  n[i] - cap;
		}

		cap = 0;
	
	for ( x = 0; x <= 12; x++)
	{
		if (n[i] == separators[x])
		{
			x = 12;
			cap = 32;
		}
	}
}}
