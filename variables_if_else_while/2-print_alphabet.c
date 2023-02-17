#include <stdio.h>

/**
 * main - prints a to z
 *
 * Return: always 0
 *
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
