#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
        char c;

        c = 'a';

        printf("hello %c\n", c);
        _printf("hello %c\n", c);
        printf("your name is %s\n", "aya");
        _printf("your name is %s\n", "aya");
        return 0;
}
