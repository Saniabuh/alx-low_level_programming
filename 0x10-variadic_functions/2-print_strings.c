#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *sep, const unsigned int n, ...)
{
	unsigned int j;
	char *str;

	va_list list;

	va_start(list, n);

	for (j = 0; j < n; j++)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "(nil)";
		if (!sep)
			printf("%s", str);
		else if (sep && j == 0)
			printf("%s", str);
		else
			printf("%s%s", sep, str);
	}

	printf("\n");

	va_end(list);
}
