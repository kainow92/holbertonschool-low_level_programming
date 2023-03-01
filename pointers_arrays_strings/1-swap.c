#include "main.h"

/**
 * swap_int - swap
 * @a: input
 * @b: input
 *
 */

void swap_int(int *a, int *b)
{
	*a = &*b;
	*b = &*a;
}
