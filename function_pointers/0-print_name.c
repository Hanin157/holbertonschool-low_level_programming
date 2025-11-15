#include "function_pointers.h"

/**
 * print_name - prints a name using a provided callback
 * @name: pointer to the name string
 * @f: pointer to function (char *) -> void
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name == (void *)0 || f == (void *)0)
{
return;
}
f(name);
}
