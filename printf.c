
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
		{"%", print_specifier},
		{NULL, NULL}
	};

	va_start(ap, format);

	count = func_call(format, ops, ap);
	va_end(ap);
	return (count);
}
