#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 *
 * "HH:MM" from 00:00 to 23:59, representing all 1,440 minutes in a day.
 */
void jack_bauer(void)
{
	int hour, mins;

	for (hour = 0; hour <= 23; hour++)
	{
		for (mins = 0; mins <= 59; mins++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}
	}
}
