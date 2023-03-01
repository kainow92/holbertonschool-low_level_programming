#include "main.h"

/**
 * swap_int - swap
 * @a: input
 * @b: input
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
