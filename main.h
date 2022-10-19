#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
/**
 * struct print - struct name
 * @str: conversion specifier
 * @func: function pointer
 */
typedef struct print
{
	char *str;
	int (*func)(va_list ap);
} print_func;
int print_char(va_list ap);
int print_string(va_list ap);
int print_int(va_list ap);
int print_specifier(__attribute__((unused))va_list ap);
int func_call(const char *format, print_func ops[], va_list ap);
int _putchar(char c);
int _printf(const char *format, ...);
void printstring(char *s);
int print_integer(va_list ap);
int print_unsiignedbInt(va_list ap);

#endif
