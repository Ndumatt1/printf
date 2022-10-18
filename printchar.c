#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * printstring - print out stings
 * @s: the string to print
 *
 */

void printstring(char *s)
{
	putchar(*s);
}
/**
 * _printf - self made printf function
 * @format: input strings to print
 *
 * Return: 0.
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
				_putchar('c');
			continue;

			case 's':
				s = va_arg(list, char *);
				_putchar('s');
			continue;

			case '%':
				_putchar('%');
				continue;
		}
		_putchar(*p);
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
