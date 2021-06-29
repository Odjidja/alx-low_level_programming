#include "holberton.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: character whose pointer is to be printed
 */
void print_rev(char *s)
{
int f, o, tetteh;

f = 0;

while (s[f] != 0)
{
f++;
}

tetteh = f;

for (o = tetteh - 1; o >= 0; o--)
{
_putchar(s[o]);
}

_putchar('\n');
}
