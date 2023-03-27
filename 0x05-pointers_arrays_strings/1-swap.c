#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: integer to swap
 * @b: integer to swap
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two mintegers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
