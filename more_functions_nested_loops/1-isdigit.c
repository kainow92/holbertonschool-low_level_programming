#include "main.h"

/**
 * _isdigit - finds digit
 * @c: input variable
 *
 * Return: 1 for digit 0 else
 */
int _isdigit(int c)
{
	int n;

	if (c > 47 && c < 58)
	{
	n = 1;
	}
	else
	{
	n = 0;
	}
	return (n);
}
