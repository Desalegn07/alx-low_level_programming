#include "main.h"
/**
 * main - prints the lower cases.
 *Description: This function prints the lowercase alphabet from 'a' to 'z'
 *
 * Return: Always (0)
 */
void print_alphabet(void)
{
int c;
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
}
