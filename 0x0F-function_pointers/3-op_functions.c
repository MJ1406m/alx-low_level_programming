#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - performs simple operations
 * @a: first value
 * @b: second value
 *
 * Return:
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - performs simple operations
 * @a: first value
 * @b: second value
 *
 * Return:
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - performs simple operations
 * @a: first value
 * @b: second value
 *
 * Return
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - performs simple operations
 * @a: first value
 * @b: second value
 *
 * Return:
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a /b);
}

/**
 * op_mod - performs simple operations
 * @a: first value
 * @b: second value
 *
 * Return:
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
}
		

