#include "main.h"
#include <stdio.h>

/**
 * rot13- encoder
 * rot13: my encoder
 * @p: my parameter
 * Return: p
*/

char *rot13(char *p)
{
int a, b;
char comp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char data[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (a = 0 ; p[a] != '\0' ; a++)
{
for (b = 0 ; b < 52 ; b++)
{
if (p[a] == comp[b])
{
p[a] = data[b];
break;
}
}
return (p);
}
}
