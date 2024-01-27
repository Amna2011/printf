#include "main.h"

/**
 * _printchar - Prints a character to standard output.
 * @c: The character to print.
 *
 * Return: The number of characters printed (1 in this case).
 */
int _printchar(char c)
{
    return (_putchar(c));
}

/**
 * _printstr - Prints a string to standard output.
 * @str: The string to print.
 *
 * Return: The number of characters printed.
 */
int _printstr(char *str)
{
    int count = 0;
    while (*str)
    {
        count += _putchar(*str++);
    }
    return count;
}
