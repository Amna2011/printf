#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - Produces output according to a format.
 * @format: The format string containing conversion specifiers.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count;
	char spec;
	int num;
	char c;
	char *str;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && (*(format + 1) == 'c'
			|| *(format + 1) == 's' || *(format + 1) == '%'
			|| *(format + 1) == 'd' || *(format + 1) == 'i'))
		{
			format++;
			spec = *format;
			if (spec == 'd')
			{
				num = va_arg(args, int);
				count += _printint(num);
			}
			else if (spec == 'i')
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
			{
				count += _printchar('%');
			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
