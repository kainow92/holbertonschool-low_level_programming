#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet x10
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	j = 0;
	while (j < 10)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
	j++;
	}
}
