#include "main.h"

/**
 * print_diagonal - draws diagonal line in the terminal
 * @n: function argument
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int j = 0;

		while (j < n)
		{
			int i;

			for (i = 1; i <= j; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			j++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
