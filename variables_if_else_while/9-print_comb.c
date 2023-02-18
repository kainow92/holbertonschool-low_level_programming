#include <stdio.h>

/**
 * main - prints 0 to 9 followed by comma and space
 *
 * Return: always 0
 *
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
{
	putchar(i);
	putchar(',');
	putchar(' ');
}

putchar('\n');
return (0);
}
