#include "holberton.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: string with characters to be halved
 */
void puts_half(char *str)
{
int odjidja, f, t;

odjidja = 0;

while (str[odjidja] != '\0')
{
odjidja++;
}

if (odjidja % 2 == 0)
{
for (f = odjidja / 2; str[f] != 0; f++)
{
_putchar(str[f]);
}
}
else
{
for (t = (odjidja - 1) / 2; t < odjidja - 1; t++)
{
_putchar(str[t + 1]);
}
}

_putchar('\n');
}
