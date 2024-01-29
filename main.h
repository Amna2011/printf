#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...);
char _putchar(char c);
int _printstr(char *str);
int _printchar(char c);
int _printint(int num);
int ft_char(const char *format, va_list args);
#endif /* MAIN_H */
