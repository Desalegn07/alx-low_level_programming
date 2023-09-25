#include "main.h"

/**
 * *_strncpy - Copies the string at most n bytes;
 * @dest: Destination string
 * @src: Source string
 * @n: numbers of characters in src string
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0';  i++)
{
	dest[i] = src[i];
	dest++;
src++;
}
for (; i < n; i++)
{
	dest[i] = '\0';
}

return (dest);
}
