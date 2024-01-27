#include "main.h"
#include <stdarg.h>
/**
 * _printf - produces output according to format
 * @format: format string containing zero or more directives
 *
 * Return: the number of characters printed, excluding null byte
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int count;

	count = 0;
	va_start(ap, format);
	while (*format != '\0')
		if (*format == '%')
			count += print_format(*(++format), ap);
		else
			count += _putchar(format);
		++format;
	va_end(ap);
	return (count);
}
