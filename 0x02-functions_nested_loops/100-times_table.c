#include "main.h"
/**
 * print_times_table - Prints the times table of the input,
 * starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
int num, mult, result;

if (n >= 0 && n <= 15)
{
for (num = 0; num <= n; num++)
{
_putchar('0');

for (mult = 1; mult <= n; mult++)
{
_putchar(',');
_putchar(' ');

result = num * mult;

if (result <= 99)
_putchar(' ');
if (result <= 9)
_putchar(' ');

if (result >= 100)
{
_putchar((result / 100) + '0');
_putchar(((result / 10)) % 10 + '0');
}
else if (result <= 99 && result >= 10)
{
_putchar((result / 10) + '0');
}
_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
}
