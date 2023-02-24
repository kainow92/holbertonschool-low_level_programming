#include "main.h"

/**
 *
 *
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


	
