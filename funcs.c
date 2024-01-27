#include "main.h"
/**
 * print_char - prints a character
 * @c: The character to print
 *
 * Return: _putchar
 */
int print_char(int c)
{
	return (_putchar(c));
}

/**
 * print_str - prints a string
 * @str: The string to print, pointer
 *
 * Return: count
 */
int print_str(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
		print_char((int)*str);
		++count;
		++str;
	return (count);
}

/**
 * print_int - function that prints an integer .
 * @n: integer to be printed by function
 * @base: the base of n
 *
 * Return: counter
 */

int print_int(long n, int base)
{
	int count;
	char *symbols;

	symbols = "0123456789abcdef";
	if (n < 0)
		_putchar("-");
		return (print_int(-n, base) + 1);
	else if (n < base)
		return (print_char(symbols[n]));
	else
		count = print_int(n / base, base);
		return (count + print_int(n % base, base));
}
