#include "main.h"

/**
 * _printf - Produces according to a format
 * @format: format string conversion specifiers.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && (*(format + 1) == 'c' || *(format + 1) == 's'
					|| *(format + 1) == '%' || *(format + 1) == 'd' || *(format + 1) == 'i'))
		{
			format++;
			count += _formatspec(format, args);
		}
		else
			count += _putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}

/**
 * _formatspec - responsible for handling conversion specifiers
 * @format: format string conversion specifiers.
 * @args: The character to print, argument pointer
 *
 * Return: count.
 */
int _formatspec(const char *format, va_list args)
{
	int count;
	char spec, c;
	char *str;
	int num;

	count = 0;
	spec = *format;
	if (spec == 'd' || spec == 'i')
	{
		num = va_arg(args, int);
		count += _printint(num);
	}
	else if (spec == 'c')
	{
		c = va_arg(args, int);
		count += _printchar(c);
	}
	else if (spec == 's')
	{
		str = va_arg(args, char*);
		count += _printstr(str);
	}
	else if (spec == '%')
		count += _printchar('%');
	return (count);
}
