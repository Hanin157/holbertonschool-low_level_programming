#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_int - prints an integer using _putchar
 * @n: integer to print
 */
static void print_int(int n)
{
unsigned int num;

if (n < 0)
{
_putchar('-');
num = (unsigned int)(-n);
}
else
{
num = (unsigned int)n;
}

if (num / 10)
print_int(num / 10);
_putchar((num % 10) + '0');
}

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;

va_start(ap, n);
i = 0;
while (i < n)
{
int num = va_arg(ap, int);

print_int(num);
if (separator != 0 && i != n - 1)
{
unsigned int j = 0;

while (separator[j] != '\0')
{
_putchar(separator[j]);
j++;
}
}
i++;
}
va_end(ap);
_putchar('\n');
}
