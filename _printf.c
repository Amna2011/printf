#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - produces output according to format
 * @format: format string containing zero or more directives
 *
 * Return: the number of characters printed, excluding null byte
 */
int _printf(const char *format, ...)
{
	data_t types[] = {
		{"c", _printchar}, {"s", _printstr}};
	int i, j, counter = 0;
	va_list ap;

	va_start(ap, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			counter += _putchar(format[i]);
		else if (format[i + 1] == '%')
		{
			counter += _putchar('%');
			i++;
		}
		else if (format[i + 1] != 'c' && format[i + 1] != 's')
		{
			counter += _putchar('%');
			counter += _putchar(format[i + 1]);
			i++;
		}
		else
		{
			for (j = 0; j < 6; j++)
				if (format[i + 1] == *types[j].type)
					counter += types[j].func(ap);
			i++;
		}
	}
	va_end(ap);
	return (counter);
}
