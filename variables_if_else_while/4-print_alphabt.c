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
	if (i == 101 || i == 113)
	i = i;
	else
	putchar(i);
	}
	putchar('\n');
	return (0);
}
