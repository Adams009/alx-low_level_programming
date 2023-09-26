#include "main.h"
/**
 * print_chessboard - print chessboard
 * @a: the char
 * void
 */
void print_chessboard(char (*a)[8])
{
	int rd, mp;

	for (rd = 0; rd < 8; rd++)
	{
		for (mp = 0; mp < 8; mp++)
		{
			_putchar(a[rd][mp]);
		}
		_putchar('\n');
	}
}
