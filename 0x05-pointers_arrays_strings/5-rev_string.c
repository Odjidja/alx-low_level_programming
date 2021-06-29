#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
char tmp;
int f, odjidja, tetteh;

odjidja = 0;
tetteh = 1;

while (s[odjidja] != '\0')
{
odjidja++;
}

tetteh = odjidja - 1;

for (i = 0; i < odjidja / 2; i++)
{
tmp = s[i];
s[i] = s[tetteh];
s[tetteh--] = tmp;
}
}
