#include "main.h"

/**
 * jack_bauer - prints hours
 *
 * Return: Always 0
 *
 */

void jack_bauer(void)
{

	int h1outer;
	int h2;
	int m1;
	int m2;

	for (h1outer = 0; h1outer < 3; h1outer++)
	{
	for (h2 = 0; h2 < 10; h2++)
	{
	if ((h2 == 4) && (h1outer == 2))
	{
	break;
	}
	for (m1 = 0; m1 < 6; m1++)
	{
	for (m2 = 0; m2 < 10; m2++)
	{
	_putchar(h1outer + '0');
	_putchar(h2 + '0');
	_putchar(':');
	_putchar(m1 + '0');
	_putchar(m2 + '0');
	_putchar('\n');
	}
	}
	}
	}
}
