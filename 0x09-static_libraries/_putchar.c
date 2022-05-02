#include <unistd.h>

/**
 * _putchar - writes the character c to stout
 *
 * @c: character to print
 *
 * Return: On succes 1
 * On error, -1 is return and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
