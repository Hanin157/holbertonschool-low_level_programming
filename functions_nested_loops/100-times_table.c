#include "main.h"

/**
 * print_number - prints a number using _putchar
 * @n: number to print (0 <= n <= 225)
 */
void print_number(int n)
{
if (n >= 100)
{
_putchar((n / 100) + '0');
_putchar(((n / 10) % 10) + '0');
_putchar((n % 10) + '0');
}
else if (n >= 10)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else
{
_putchar(n + '0');
}
}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number defining the size of the table
 */
void print_times_table(int n)
{
int i;
int j;
int prod;

if (n < 0 || n > 15)
return;

i = 0;
while (i <= n)
{
j = 0;
while (j <= n)
{
prod = i * j;
if (j == 0)
{
print_number(prod);
}
else
{
_putchar(',');
_putchar(' ');
if (prod < 10)
{
_putchar(' ');
_putchar(' ');
}
else if (prod < 100)
{
_putchar(' ');
}
print_number(prod);
}
j++;
}
_putchar('\n');
i++;
}
}
