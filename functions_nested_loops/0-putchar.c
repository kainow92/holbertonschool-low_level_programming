#include "main.h"

/**
 * _putchar - prints _putchar
 * @c: char
 *
 * Return: always 0
 */
int _putchar(char c)
{
	int i;
	char frase[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
	_putchar(frase[i]);
	}
	_putchar('\n');
	return (0);
}
