#include "main.h"
#include <stdlib.h>
<<<<<<< HEAD
#include <stdio.h>

/**
 * argstostr - converts the params passed to the program to string
 * @ac: argument count
 * @av: argument vector
 *
 * Return: ...
 */
char *argstostr(int ac, char **av)
{
	int ch = 0, i = 0, j = 0, k = 0;
	char *s;
=======
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *str;
>>>>>>> 2a8658ea1c90a7cbbc7815fd8eddb2563d107049

	if (ac == 0 || av == NULL)
		return (NULL);

<<<<<<< HEAD
	while (i < ac)
	{
		while (av[i][j])
		{
			ch++;
			j++;
		}

		j = 0;
		i++;
	}

	s = malloc((sizeof(char) * ch) + ac + 1);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			s[k] = av[i][j];
			k++;
			j++;
		}

		s[k] = '\n';

		j = 0;
		k++;
		i++;
	}

	k++;
	s[k] = '\0';
	return (s);
=======
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[r] = av[i][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
>>>>>>> 2a8658ea1c90a7cbbc7815fd8eddb2563d107049
}
