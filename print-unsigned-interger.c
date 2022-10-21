#include "main.h"

int print_binary(unsigned int num);

/**
 * print_unsignedbin- prints binary
 *
 * @ap: variadic argument list
 *
 * Return: the number of character printed
 */

int print_unsignedbin(va_list ap)
{
	unsigned int num;
	int count = 0;

	num = va_arg(ap, int);

	count += print_binary(num);
	return (count);
}

/**
 * print_binary - prints numbers in binary
 *
 * @num: integer to be coverted
 *
 * Return: number of characters printed
 */

int print_binary(unsigned int num)
{
	int count = 0;

	if ((num / 2) != 0)
	{
		count += print_binary(num / 2);
	}
	_putchar((num % 2) + '0');
	return (count + 1);
}
