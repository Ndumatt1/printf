#include "main.h"

int print_positive_integer(unsigned int num);

/**
 * print_unsignedInt - prints unsigned int only
 *
 * @ap: variadic argument list
 *
 * Return: number of integers printed
 */

int print_unsignedInt(va_list ap)
{
	unsigned int num;
	int count = 0;

	num = va_arg(ap, int);

	count += print_positive_integer(num);
	return (num);
}

/**
 * print_positive_integer - prints positive integer only
 *
 * @num: integer to be printed
 *
 * Return: number of characters printed
 */

int print_positive_integer(unsigned int num)
{
	int count = 0;

	if (num / 10)
	{
		count += print_positive_integer(num / 10);
	}
	_putchar((num % 10) + '0');
	return (count + 1);
}
