#include "main.h"
/**
 * reverse_array - function that reverses
 *
 * @a: the first int
 *
 * @n: the second int
 *
 * void
 */
void reverse_array(int *a, int n)
{
	int art = 0;
	int nod = n - 1;

	while (art < nod)
	{
		int new = a[art];

		a[art] = a[nod];
		a[nod] = new;

		art++;
		nod--;
	}
}
