#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always (0)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
