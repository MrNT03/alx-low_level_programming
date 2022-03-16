#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of
 *		Jack Bauer, starting from 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
	int hour, mi;

	for (hour = 0; hour <= 23; hour++)
	{
		for (mi = 0; mi <= 59; mi++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((mi / 10) + '0');
			_putchar((mi % 10) + '0');
			_putchar('\n');
		}
	}
}
