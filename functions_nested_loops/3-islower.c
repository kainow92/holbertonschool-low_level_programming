#include "main.h"

/**
 * _islower - prints lowercase
 * @c: input variable
 *
 * Return: 1 for lowercase 0 for uppercase
 *
 */
int _islower(int c)
{
	int h;

	if (c >= 96 && c <= 123)
	{
	h = 1;
	}
	else
	{
	h = 0;
	}
	return (h);
}


