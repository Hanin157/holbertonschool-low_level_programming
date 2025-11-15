#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * print_name - prints a name using a callback
 * @name: pointer to char name
 * @f: pointer to function that takes (char *) and returns void
 *
 * Description: Calls the function @f with @name if both are non-NULL.
 */
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
