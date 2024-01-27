#include "main.h"
#include <stdarg.h>
/**
 * print_format - function print a specifier
 * @specifier: conversion specifiers
 * @ap: The character to print, argument pointer
 *
 * Return: the number of characters printed
 */

int print_format(char specifier, va_list ap)
{
	int count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += print_str(va_arg(ap, char*));
	else if (specifier == 'd')
		count += print_int((long)(va_arg(ap, int)));
	else if (specifier == 'i')
		count += print_int((long)(va_arg(ap, int)));
	else
		count += _putchar(specifier);
	return (count);
}
