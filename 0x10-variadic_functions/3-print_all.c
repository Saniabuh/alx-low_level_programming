#include "variadic_functions.h"

/**
 * print_all - prints everything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", seperator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", seperator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", seperator, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", seperator, str);
					break;
				default:
				i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
