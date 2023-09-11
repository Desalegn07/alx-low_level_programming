#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse.
 * Return: Always (0)
 */
int main(void)
{
char l, ch;
for (l = 0; l <= 9; l++)
{
putchar(l + '0');
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
