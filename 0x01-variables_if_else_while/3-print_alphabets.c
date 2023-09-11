#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, and then in upper case.
 *
 * Return: Always (0)
 */
int main(void)
{
char chl, chu;
for (chl = 'a'; chl <= 'z'; chl++)
{
putchar(chl);
}
for (chu = 'A'; chu <= 'Z'; chu++)
{
putchar(chu);
}
putchar('\n');
return (0);
}
