#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/**
 * print_name - prints a name using a callback
 * @name: pointer to char name
 * @f: pointer to function that takes (char *) and returns void
 *
 * Description: Calls the function @f with @name if both are non-NULL.
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the first element of the integer array
 * @size: number of elements in the array
 * @action: pointer to function to apply to each element
 *
 * Description: Calls @action on each element of @array if both are non-NULL.
 */
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* FUNCTION_POINTERS_H */
