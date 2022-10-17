#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 *
 */

#include "main.h"
#include <stdio.h>

/**
 *
 */
void printstring(char *s)
{
	putchar(*s);
}

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
