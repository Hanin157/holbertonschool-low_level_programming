#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments to be summed
 * Return: sum of the parameters, or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i;
int sum;

if (n == 0)
return (0);

va_start(ap, n);
sum = 0;
i = 0;
while (i < n)
{
sum += va_arg(ap, int);
i++;
}
va_end(ap);
return (sum);
}
