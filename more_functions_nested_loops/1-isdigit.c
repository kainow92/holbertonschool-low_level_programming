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

	if (c >= 0 && c <= 9)
	{
	n = 1;
	}
	else
	{
	n = 0;
	}
	return (n);
}
