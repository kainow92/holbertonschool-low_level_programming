#include "main.h"
/**
 * _abs - absolute value
 * @n: n
 *
 * Return: always 0
 *
 */
int _abs(int n)
{
	int j;

	if (n > 0)
	{
	j = n;
	}
	else if (n < 0)
	{
	j = -1 * n;
	}
	else
	{
	j = 0;
	}
	_putchar(j);
	return (n);
}

