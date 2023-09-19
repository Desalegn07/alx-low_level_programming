#include "main.h"

/**
 * _strlen - calculates the length of a string.
 * @s: points to a string
 * Return: Always 0.
 */
int _strlen(char *s)
{
int j;
int length = 0;

for (j = 0; s[j] != '\0'; j++)
length++;
return (length);
}
