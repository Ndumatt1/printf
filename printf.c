
#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints characters and string
 *
 * @format: format specifier
 *
 * Return: Number of characters printed
 * excluding the null bytes
 */

int _printf(const char *format, ...)
{
	int count;
	va_list ap;
	print_func ops[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_integer},
		{"i", print_integer},
		{"%", print_specifier},
		{"b", print_unsignedbin},
		{"u", print_unsignedInt},
		{"o", print_unsignedOct},
		{"x", print_unsignedHex},
		{"X", print_unsignedHex},
		{NULL, NULL}
	};
	if (format == NULL)
	{
		return (-1);
	}

	va_start(ap, format);

	count = func_call(format, ops, ap);
	va_end(ap);
	return (count);
}
