
#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * func_call - calls the required function
 *
 * @format: strin containing characters
 *
 * @ops: structure defined in headerfile
 *
 * @ap: argument list containing all the specifiers
 *
 * Return: the number of characters printed
 */


int func_call(const char *format, print_func ops[], va_list ap)
{
	int i, j, count = 0, value = 0;

	for (i = 0; format[i] != '\0'; i++)

		if (format[i] == '%')
		{
			for (j = 0; ops[j].str != NULL; j++)
			{
				if (format[i + 1] == ops[j].str[0])
				{
					value = ops[j].func(ap);
					if (value == -1)
					{
						return (-1);
					}
					count += value;
					break;
				}
			}
			if (ops[j].str == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
				_putchar(format[i]);
				_putchar(format[i + 1]);
				count = count + 2;
				}
			else
			{
				return (-1);
			}
