#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to number to be swap
 * @b: pointer to number to be swap
 * @tmp: temporary variable
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
