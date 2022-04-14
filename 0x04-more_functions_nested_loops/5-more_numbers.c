#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j = 1;

	while (j <= 10)
	{
		i = 0;

		while (i <= 14)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			i++;
		}
		j++;
		_putchar('\n');
	}
}
