#include "main.h"
/**
  * jack_bauer - prints every minute of the day of Jack Bauer
  *
  * Return: Always 0.
  */
void jack_bauer(void)
{
	int hrs, mins;

	hrs = 0;

	while (hrs < 24)
	{
		mins = 0;
		while (mins < 60)
		{
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar(':');
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar('\n');
			mins++;
		}
		hrs++;
	}
}
