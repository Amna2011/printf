#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct datatype - Struct datatype
 *
 * @type: The type of argument
 * @func: The function pointer to the print function
 */
typedef struct datatype
{
	char *type;
	int (*func)(va_list list);
} data_t;
int _printf(const char *format, ...);
int _putchar(char c);
int _printstr(char *str);
int _printchar(char c);
#endif /* MAIN_H */
