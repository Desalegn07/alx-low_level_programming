#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n:  is the variable assigned for the numbers of _
 * Return: 0
 */
void print_line(int n)
{
if (n == 0)
{
_putchar('\n');
}
else if (n > 0)
{
_putchar('_');
_putchar('_');
_putchar('_');
_putchar('\n');
_putchar('_');
_putchar('_');
_putchar('_');
_putchar('_');
_putchar('_');
_putchar('_');
_putchar('_');
_putchar('_');
_putchar('_');
_putchar('_');
_putchar('\0');
}
else
{
_putchar('\n');
}
}
