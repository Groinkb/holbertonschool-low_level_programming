#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name
 *
 * @name: input the name
 * @f: function pointer to pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
