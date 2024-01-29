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
 * _printstr - Prints string to standard output.
 * @str: The string to print.
 *
 * Return: number of characters printed.
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
 * @value: The integer to print.
 *
 * Return: The number of characters printed.
 */

int _printint(int value)
{
char buffer[32];
int i, j, printed = 0;
if (value < 0)
{
_putchar('-');
printed++;
value = -value;
}
i  = 0;
do
{
buffer[i++] = '0' + (value % 10);
value /= 10;
printed++;
} while (value > 0);
for (j = i - 1; j >= 0; j--)
{
_putchar(buffer[j]);
}
return (printed);
}
