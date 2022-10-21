#include "main.h"

int print_HEX(unsigned int num);
int big_HEX(unsigned int rem);
/**
 * print_unsignedHeX - convert int to hex
 * @ap: variadic function argument
 *
 * Return: number of characters
 */

int print_unsignedHeX(va_list ap)
{
	unsigned int num;
	int count = 0;

	num = va_arg(ap, int);
	count += print_HEX(num);
	return (count);
}
/**
 * print_HEX - convert int to HEX
 * @num: integer to convert
 *
 * Return: number of characters printed.
 */
int print_HEX(unsigned int num)
{
	int count = 0;
	unsigned int rem;

	if ((num / 16) != 0)
	{
	       count += print_HEX(num / 16);
	}
	rem = (num % 16);
	if (rem > 9)
	rem = (rem % 10);
	switch (rem)
	{
		case 0:
			_putchar(65);
			break;
		case 1:
			_putchar(66);
			break;
		case 2:
			_putchar(67);
			break;
		case 3:
			_putchar(68);
			break;
		case 4:
			_putchar(69);
			break;
		case 5:
			_putchar(70);
			break;
		default:
			return (-1);
	}
	return (count);
}
