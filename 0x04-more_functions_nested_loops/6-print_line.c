#include "main.h"
/**
 * print_line - draws straight line in terminal
 * @n: function argument
 * Return: void
 *
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
