#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * prints_strings - function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: elipse
 *
 * Description: If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("nill");
		else
			printf("%s", str);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}