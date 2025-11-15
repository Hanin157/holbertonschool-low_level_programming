#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: pointer to the name string
 * @f: pointer to function that takes a char * and returns void
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
