#include "main.h"

int print_hex(unsigned int num);
int small_hex(unsigned int rem);
/**
 * print_unsignedHex - unmsigned int is converted to hex
 *
 * @ap: variadic arguments
 *
 * Return: number of characters printed
 */
int print_unsignedHex(va_list ap)
{
	unsigned int num;
	int count = 0;

	num = va_arg(ap, int);
	count += print_hex(num);
	return (count);
}
/**
 * int print_hex - convert int to hex
 * @num: interget to convert
 *
 * Return: numbers of characters printed
 */
int print_hex(unsigned int num)
{
	int count = 0;
	unsigned int rem;

	if ((num / 16) != 0)
		count += print_hex(num / 16);
	rem = (num % 16);
	if (rem > 9)
		count = small_hex(rem);
	else
		_putchar(rem + '0');
	return (count + 1);
}
int small_hex(unsigned int rem)
{
	int count = 0;

	rem = (rem % 10);
	switch (rem)
	{
		case 0:
			_putchar(97);
			break;
		case 1:
			_putchar(98);
			break;
		case 2:
			_putchar(99);
			break;
		case 3:
			_putchar(100);
			break;
		case 4:
			_putchar(101);
			break;
		case 5:
			_putchar(102);
			break;
		default:
			return (-1);
	}
	return (count);
}
