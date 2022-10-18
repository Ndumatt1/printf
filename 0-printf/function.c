#include <stdarg.h>
#include "main.h"
#include <unistd.h>

/**
 * print_char - prints character
 *
 * @ap: variable list
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
 *
 * Return: to the standard out 
 */

int print_specifier()
{
	char c = '%';
	return (write(1, &c, 1));
}
