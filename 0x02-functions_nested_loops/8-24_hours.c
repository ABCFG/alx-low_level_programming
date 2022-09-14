#include "main.h"

/**
 * jack_bauer - Function that print very minute of the day
 * n from 00:00 to 23:59, min loop counts min while hour loop counts hr
 * and resets mins
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int mins = 0;
	int hour_remainder;
	int mins_remainder;

	while (hours <= 23)
	{
	while (mins <= 59)
	{
	mins_remainder = mins % 10;
	hour_remainder = hours % 10;
	_putchar(hours / 10 + '0');
	_putchar(hour_remainder + '0');
	_putchar( );
	_putchar(mins / 10 + '0');
	_putchar(mins_remainder + '0');
	mins++;
	_putchar('\n');
	}
	hours++;
	mins = 0;
	}
}
