#include <stdio.h>

/**
 *  _strlen - Returns the lenghth of a string
 *  @str: The string to get lenghth of
 *  Return: The lenghth of @str
 */
size_t _strlen(const char *str)

{
	size_t lenghth = 0;

	while (*str++)
	lenghth++;
	return (lenghth);

}
