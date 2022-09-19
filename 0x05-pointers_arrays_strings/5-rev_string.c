#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - Function to reverse string
 * @s: to reverse string
 *
 * Return: Always 0
 */

void rev_string(char *s)
{
	char rev = s[10];
	int fcounter = 0;
	int i;

	while (s[fcounter] != '\0')
		fcounter++;

	for (i = 0; i < fcounter; i++)
	{
		fcounter--;
		rev = s[i];
		s[i] = s[fcounter];
		s[fcounter] = rev;
	}
}
