#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...);
<<<<<<< HEAD

=======
char _putchar(char c);
int print_format(char specifier, va_list ap);
int print_char(int c);
int print_str(char *str);
int print_int(long n, int base);
>>>>>>> a18218999715435dd5361034d168158dccfcbdde
#endif /* MAIN_H */
