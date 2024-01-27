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
    int count = 0;
    char spec;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%' && (*(format + 1) == 'c' || *(format + 1) == 's' || *(format + 1) == '%'))
        {
            format++;
            spec = *format;

            if (spec == 'c')
            {
                char c = va_arg(args, int);
                count += write(1, &c, 1);
            }
            else if (spec == 's')
            {
                char *str = va_arg(args, char*);
                while (*str)
                    count += write(1, str++, 1);
            }
            else if (spec == '%')
            {
                count += write(1, "%", 1);
            }
        }
        else
        {
            count += write(1, format, 1);
        }

        format++;
    }

    va_end(args);

    return count;
}
