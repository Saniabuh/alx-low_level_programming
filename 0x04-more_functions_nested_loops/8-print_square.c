#include "main.h"

/**
 * print_square - prints a square
 * @size: intiger agrument
 * Return: void
 */
void print_square(int size)
{
	if (size > 0)
	{
		int j = 0;

		while (j < size)
		{
			int i;

			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
			j++;
		}
	}
	else
		_putchar('\n');
}
