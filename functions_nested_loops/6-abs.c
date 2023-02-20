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
	j = n * -1;
	}
	else
	{
	j = 0;
	}
	return (j);
}

