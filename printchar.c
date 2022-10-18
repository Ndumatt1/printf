#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints char and string to standardout
 *
 * @format: last argument to the varaidic function
 *
 * Return: number of character printed
 */

int _printf(const char *format, ...)
{
	const char *p;
	int i;
	char *s;

	va_list list;

	va_start(list, format);

	for (p = format; *p != '\0'; p++)
	{
		if (*p != '%')
		{
			_putchar(*p);
			continue;
		}
		switch (*++p)
		{
			case 'c':

				i = va_arg(list, int);
			_putchar(i);
			break;

			case 's':
				s = va_arg(list, char *);
			printstring(s);
			break;

			case '%':
				_putchar('%');
				break;
		}
	}
	va_end(list);
	return (i);
}

#include "main.h"
#include <stdio.h>

/**
 * printstring - prints string
 *
 * @s: string to print
 */

void printstring(char *s)
{
	putchar(*s);
}
