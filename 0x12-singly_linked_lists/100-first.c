#include <stdio.h>

void renewed(void) __attribute__ ((constructor));
/**
 * renewed - works to print before main
 *
 * Retrn: is void
 */
void renewed(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
