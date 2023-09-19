#include "main.h"
/**
 **print_array - prints n elements of array
 *@n: the first int
 *@a: the next int
 * void
 */
void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		printf("%d", a[z]);
		if (z < n - 1)
			printf(", ");
	}
	printf("\n");
}
