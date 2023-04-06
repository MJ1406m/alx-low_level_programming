#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: numberto calculate natural square root
 * @i: iterate number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - a function that calculates natural square root
 * @n: number to calculate square root
 *
 * Return: natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
