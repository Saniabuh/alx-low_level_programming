#include "main.h"
#include <stdlib.h>

/**
 * _atoi_digit - convert a char to integer.
 * @x: character to convert.
 * Return: integer.
 **/

int _atoi_digit(char x)
{
	unsigned int res;

	if (x <= '9' && x >= '0')
		res = x - '0';
	return (res);
}

/**
 * _isNumber - Define if a string is a number.
 * @argv: Pointer to string.
 * Return: success (0).
 **/
int _isNumber(char *argv)
{
	int i;

	for (i = 0; argv[i]; i++)
		if (argv[i] < 48 || argv[i] > 57)
			return (1);
	return (0);
}

/**
 *_calloc - allocate array of size * nmemb.
 * @nmemb: number of elements.
 * @size: size of element.
 * Return: pointer to array.
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tab;
	unsigned int i;

	tab = malloc(size * nmemb);

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		tab[i] = '0';

	return (tab);
}

/**
 * mul_array - multiply two arrays.
 * @a1: first array.
 * @len1: length of array a1.
 * @a2:  char.
 * @a3: array for result.
 * @lena: length of array a3.
 * Return: pointer to array.
 **/

void *mul_array(char *a1, int len1, char a2, char *a3, int lena)
{
	int mul = 0, i, k;

	k = lena;
	for (i = len1 - 1; i >= 0 ; i--)
	{
		mul += (a1[i] - '0') * (a2 - '0') + (a3[k] - '0');
		a3[k] = (mul % 10) + '0';
		mul /= 10;
		k--;
	}

		while (mul != 0)
		{
			mul += a3[k] - '0';
			a3[k] = (mul % 10) + '0';
			mul /= 10;
			k--;
		}

	return (a3);
}
/**
 * print_array - print all digits of array.
 * @nb: number of elements to print.
 * @a: array of elements.
 **/
void print_array(char *a, int nb)
{
	int i = 0;

	while (a[i] == '0' && (i + 1) < nb)
	{
		i++;
	}
	for (; i < nb; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}

/**
 *main - print the multiplication of 2 numbers.
 *@argc: array length.
 *@argv: array.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
