#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything based on a format string
 * @format: list of types of arguments passed to the function
 *          c: char, i: int, f: float, s: char * (NULL -> (nil))
 */
void print_all(const char * const format, ...)
{
va_list ap;
unsigned int i;
char *s;
char *sep;

va_start(ap, format);
i = 0;
sep = "";
if (format != NULL)
{
while (format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(ap, int));
sep = ", ";
break;
case 'i':
printf("%s%d", sep, va_arg(ap, int));
sep = ", ";
break;
case 'f':
printf("%s%f", sep, va_arg(ap, double));
sep = ", ";
break;
case 's':
s = va_arg(ap, char *);
if (s == NULL)
s = "(nil)";
printf("%s%s", sep, s);
sep = ", ";
break;
}
i++;
}
}
printf("\n");
va_end(ap);
}
