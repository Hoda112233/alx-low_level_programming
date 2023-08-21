#include "main.h"

/**
 * jack_bauer - A function that prints the time every minute of the day.
 *
 * Description: This function iterates
 * through all the minutes of a day
 * (24 hours) and prints the time
 * in the format "HH:MM" for each minute.
 */

void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
