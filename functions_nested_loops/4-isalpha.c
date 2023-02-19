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

	if (c >= 'a' && c <= 'z')
	{
	h = 1;
	}
	if (c >= 'A' && c <= 'Z')
	{
	h = 1;
	}
	else
	{
	h = 0;
	}
	return (h);
}
