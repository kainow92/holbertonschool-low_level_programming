#include "main.h"
/**
 * _isalpha - prints letters
 * @c: input variable
 *
 * Return: 1 for lettercase 0 for non lettercase
 *
 */
int _isalpha(int c)
{
	int h;

	if (c >= 96 && c <= 123)
	{
	h = 1;
	}
	if (c >= 64 && c <= 91)
	{
	h = 1;
	}
	else
	{
	h = 0;
	}
	return (h);
}
