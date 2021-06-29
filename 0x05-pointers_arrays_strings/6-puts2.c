#include "holberton.h"

/**
 * puts2 -prints every other character of a string, starting with the
 * first character followed by a new line
 * @str: string whose characters are to be printed
 */
void puts2(char *str)
{
int odjidja, f;

odjidja = 0;

while (str[odjidja] != '\0')
{
odjidja++;
}

for (f = 0; f < len; f += 2)
{
_putchar(str[f]);
}

_putchar('\n');
}
