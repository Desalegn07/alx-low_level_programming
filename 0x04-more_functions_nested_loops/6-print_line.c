#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n:  is the variable assigned for the numbers of _
 * Return: 0
 */
void print_line(int n)
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
