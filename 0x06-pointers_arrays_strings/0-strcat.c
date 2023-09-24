#include "main.h"

/**
 * *_strcat - Concatenates two strings terminated by null character.
 * @dest: points to the first character of dest string
 * @src: points to the first src string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
char *p = dest;

while (*p != '\0')
{
	p++;
}
while (*src != '\0')
{
	*p = *src;
	p++;
	src++;
}
*p = '\0';
return (dest);
}
