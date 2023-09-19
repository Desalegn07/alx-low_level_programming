#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: points to characters.
 * return: the string
 */
void _puts(char *str)
{
int j;

for (j = 0; str[j] != '\0'; j++)
{
_putchar(str[j]);
_putchar('\0');
}
}
