#include "main.h"
/**
 * decToBinary - function to convert dec to bin
 *
 * @n: inbut number
 * Return: it return binary number
 */
int decToBinary(int n)
{
int i, x[32], y[32];
i = 0;

while (n > 0)
{
y[i] = n % 2;
n = n / 2;
i++;
}
for (int j = i - 1; j >= 0; j--)
{
*x = y[j];
}
return (*x);
}
