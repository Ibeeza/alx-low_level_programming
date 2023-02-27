#include "main.h"
/**
 * print_rev- reverse this string for me
 * @s: my parameter
*/

void print_rev(char *s)
{
int b = 0;

while (s[b] != '\0')
{
b++;
}
for (b -= 1 ; b >= 0 ; b--)
{
_putchar(s[b]);
}
_putchar('\n');
}
