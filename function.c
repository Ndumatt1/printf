
#include <stdarg.h>
#include "main.h"
#include <unistd.h>

/**
 * print_char - prints character
 *
 * @ap: variable list
 *
 * Return: number of character printed
 */

int print_char(va_list ap)
{
	char c = va_arg(ap, int);

	return (write(1, &c, 1));
}

/**
 * print_string - prints string
 *
 * @ap: varaible list
 *
 * Return: Number of characters printed
 */

int print_string(va_list ap)
{
	unsigned int i;
	char *ptr = va_arg(ap, char *);

	if (ptr == NULL)
	{
		ptr = "(nil)";
	}
	for (i = 0; ptr[i] != '\0'; i++)
	{
		_putchar(ptr[i]);
	}
	return (i);
}

/**
 * print_specifier - prints percentage
 * @ap: Variable list
 *
 * Return: to the standard out
 */

int print_specifier(__attribute__((unused))va_list ap)
{
	char c = '%';

	return (write(1, &c, 1));
}
