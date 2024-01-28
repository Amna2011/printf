#include "main.h"

/**
 * _printchar - Prints a character to standard output.
 * @c: The character to print.
 *
 * Return: The number of characters printed (1 in this case).
 */
int _printchar(char c)
{
	return (write(1,&c,1));
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
		count += write(1,str++,1);
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
	char digit;

	digit = num % 10 + '0';
	count = 0;
	if (num < 0)
	{
		count += write(1,"-",1);
		num = -num;
	}
	if (num / 10)
		count += _printint(num / 10);
	count += write(1, &digit, 1);;
	return (count);
}
