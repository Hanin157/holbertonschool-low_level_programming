#include "main.h"

/**
 * print_chessboard - prints an 8x8 chessboard
 * @a: array of 8 rows, each an array of 8 chars
 */
void print_chessboard(char (*a)[8])
{
unsigned int i;
unsigned int j;

i = 0;
while (i < 8)
{
j = 0;
while (j < 8)
{
_putchar(a[i][j]);
j++;
}
_putchar('\n');
i++;
}
}
