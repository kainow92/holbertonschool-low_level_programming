#include "main.h"
/**
 * print_last_digit - last digit
 * @n: n
 *
 * Return: always 0
 *
 */
int print_last_digit(int n)
{
	int j;

	if (n > 0)
	{
	j = n % 10;
	}
	else if (n < 0)
	{
	j = ((n * -1) % 10);
	}
	else
	{
	j = n;
	}
	_putchar(j + '0');
	return (j);
}
