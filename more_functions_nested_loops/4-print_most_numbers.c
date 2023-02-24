#include "main.h"

/**
 * print_most_numbers - print 0 to 9 skips 2 and 4
 *
 * Return: always 0
 */
void print_most_numbers(void)
{
	char l;

	for (l = '0'; l <= '9'; l++)
	{
	if (l == '2' || l == '4')
	{
	l++;
	}
	_putchar(l);
	}
	_putchar('\n');
}
