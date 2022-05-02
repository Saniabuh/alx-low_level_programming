#include "main.h"

/**
 * _isdigit - function that checks whether a number is a digit
 * @c: function argument
 * Return: 1 if true 0 if false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
