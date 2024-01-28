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
	int count;

	count = 0;
	while (*str)
		count += _putchar(*str++);
	return (count);
}
/**
 * _printint - Prints an integer to standard output.
 * @num: The integer to print.
 *
 * Return: The number of characters printed.
 */

int _printint(int num)
{
	int count;

	count = 0;
	if (num < 0)
	{
		count += _putchar('-');
		num = -num;
	}
	if (num / 10)
		count += _printint(num / 10);
	count += _putchar(num % 10 + '0');
	return (count);
}
