#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers -  function that prints numbers
  * @separator: parameter char
  * @n: parameter n
  *
  * Return: 0
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int z;
	va_list printArgs;

	va_start(printArgs, n);
	for (z = 0; z < n; z++)
	{
		if (z > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(printArgs, int));
	}
	va_end(printArgs);
	printf("\n");
}
