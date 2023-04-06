#include "main.h"
#include <stdio.h>

int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: numberto calculate natural square root 
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1)));
}

/**
 * _sqrt - calculates natural square root 
 * @n: number to calculate square root 
 * @i: iterative number
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
	
	return ( _sqrt(n, i + 1));
}
