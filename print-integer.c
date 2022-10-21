#include "main.h"

int print_num(unsigned int num);
/**
 * print_integer - prints an integer
 *
 * @ap: vriadic arguments
 *
 * Return: number of characters
 */
int print_integer(va_list ap)
{
	int n;
	unsigned int num;
	int count = 0;

	n = va_arg(ap, int);
	if (n < 0)
	{
		num = -n;
		_putcahr('_');
		count++;
	}
	else
	{
		num = n;
	}
	count += print_num(num);
	return (count);
}
/**
 * print_num - priints an integer
 * @num: integer to be printed
 *
 * Return: number of characters
 */
int print_num(unsigned int num)
{
	int count = 0;

	if (num / 10)
	{
		count += print_num(num / 10);
	}
	_putchar((num % 10) + '0');
	return (count + 1);
}
