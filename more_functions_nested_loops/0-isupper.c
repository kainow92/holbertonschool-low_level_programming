#include "main.h"

/**
 * _isupper - finds uppercase
 * @c: input variable
 *
 * Return: 1 for uppercase 0 else
 */
int _isupper(int c)
{
	int n;

	if (c > 64 && c < 91)
	{
	n = 1;
	}
	else
	{
	n = 0;
	}
	return (n);
}


