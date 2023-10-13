#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings
 * @separator: parameter char
 * @n: parameter n
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int z;
	va_list args;
	char *stag;

	va_start(args, n);
	for (z = 0; z < n; z++)
	{
		stag = va_arg(args, char *);

		if (separator != NULL && z > 0)
			printf("%s", separator);
		if (stag == NULL)
			printf("(nil)");
		else
			printf("%s", stag);
	}
	va_end(args);
	printf("\n");
}
