  
#include "holberton.h"

/**
 * *_strcpy - copies the string pointed to by the src including \0
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
int odjidja, f;

odjidja = 0;

while (src[odjidja] != '\0')
{
odjdija++;
}

for (f = 0; f < odjidja; f++)
{
dest[f] = src[f];
}
dest[f] = '\0';

return (dest);
}
