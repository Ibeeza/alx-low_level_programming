#include "main.h"
/**
 * puts_half- print half my sentence
 * @str:my parameter
*/

void puts_half(char *str)
{
int d = 0;
int b;

while (str[d] != '\0')
{
d++;
}
if (d % 2 == 1)
{
b = (d - 1) / 2;
b += 1;
}
else
{
b = d / 2;
}
for (; b < d ; b++)
{
_putchar(str[b]);
}
_putchar('\n');
}
