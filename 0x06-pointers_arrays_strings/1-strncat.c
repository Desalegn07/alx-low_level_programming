#include "main.h"

/**
 * *_strncat - concatenatea two stri gs.
 * @dest: points to the destination string
 * @src: points to the source string
 * @n: maximum bytes of the souce string
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *p = dest;

while (*p != '\0')
{
p++;
}
while (*src != '\0' && n > 0)
{
*p = *src;
p++;
src++;
n--;
}

return (dest);
}
