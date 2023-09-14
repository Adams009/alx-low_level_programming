#include "main.h"
/**
 * jack_bauer - unction that prints every minute of the day of Jack Bauer,
 *
 *
 */
void jack_bauer(void)
{
	int Hr, Min;

	for (Hr = 0; Hr < 24; Hr++)
	{
		for (Min = 0; Min < 60; Min++)
		{
			_putchar((Hr / 10) + '0');
			_putchar((Hr % 10) + '0');
			_putchar(':');
			_putchar((Min / 10) + '0');
			_putchar((Min % 10) + '0');
			_putchar('\n');
		}
	}
}
