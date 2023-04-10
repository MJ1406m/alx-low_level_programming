<<<<<<< HEAD
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the sum of args positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int k, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];


			for (k = 0; k < strlen(e); k++)
			{
				if (e[k < 48 || e[k] > 57
						{
						printf("Error\n");		return (1);
						}
					}
					sum += atoi(e);
	e++;

		}
		printf("%d\n", sum);
		}
		else
		{
		printf("0\n");
		}
		return (0);
		}
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* num_checker - checks if a given char is a number
* @a: char to be checked
* Return: 0
*/
int num_checker(char *a)
{
	int i, num, len;

	i = 0;
	num = 0;
	len = strlen(a);
	while (i < len)
	{
		if (a[i] < '0' || a[i] > '9')
		{
			return (-1);
		}
		else
			num = num * 10 + (a[i] - '0');
		i++;
	}
	return (num);
}
/**
* main - adds positive numbers
* @argc: arguement count
* @argv: array of pointers to arguement strings
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, num, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = num_checker(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
>>>>>>> 113a367b1f1cd1178d11f7873b608f3461f1976f
