#include "main.h"
/**
 * print_sign - prints sign
 * @n: n
 *
 * Return: always 0
 *
 */
int print_sign(int n)
{
	int h;
	int j;

	if (n > 0)
	{
	h = 1;
	j = '+';
	}
	else if (n < 0)
	{
	h = -1;
	j = '-';
	}
	else
	{
	h = 0;
	j = '0';
	}
	_putchar(j);
	return (h);
}
