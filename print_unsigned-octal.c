#include "main.h"

int print_octal_integer(unsigned int num);

/**
 * print_unsignedOct - prints octal integer
 *
 * @ap: variadic argument list
 *
 * Return: number of octal number printed
 */

int print_unsignedOct(va_list ap)
{
	unsigned int num;
	int count = 0;

	num = va_arg(ap, int);

	count += print_octal_integer(num);

	return (count);
}

/**
 * print_oactal_integer - prints oactal integer
 *
 * @num: number of integer printed
 *
 * Return: number of integer printed
 */

int print_octal_integer(unsigned int num)
{
	int count = 0;

	if (num / 8)
	{
		count += print_octal_integer(num / 8);
	}
	_putchar((num % 8) + '0');
	return (count + 1);
}
