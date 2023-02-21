#include "main.h"

/**
 * jack_bauer - prints all minutes
 *
 * Return: always 0
 */
void jack_bauer(void)
{
	int h;
	int m;

	h = 0;
	m = 0;
	while (h < 24)
	{
	if (h < 10)
	{
	h = h + 0;
	}
	h++;
	while (m < 60)
	{
	if (m < 10)
	{
	m = m + 0;
	}
	m++;
	}
	_putchar(h);
	_putchar(':');
	_putchar(m);
	}
	_putchar('\n');
}
