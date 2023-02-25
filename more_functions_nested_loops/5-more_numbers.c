#include "main.h"

/**
 * more_numbers - 0 to 14 ten times
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int n;
	int j;
	int h;

	n = 0;
	while (n < 10)
	{
	for (j = 0; j <= 9; j++)
	{
	_putchar(j + '0');
	}
	for (j = 10; j < 14; j++)
	{
	h = 10 * (j % 10);
	_putchar(h + '0');
	}
	_putchar('\n');
	n++;
	}
}
