#include "main.h"
#include <stdio.h>
/**
 * infinite_add- the adder two of my numbers
 * infinite_add: add my two numbers two of my numbers
 * @n1: parameter
 * @n2: parameter
 * @r: parameter
 * @size_r: parameter
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int flow = 0, a = 0, b = 0, numr = 0;
int val = 0, val1 = 0, val2 = 0;

while (*(n1 + a) != '\0')
a++;
while (*(n2 + b) != '\0')
b++;
a--;
b--;
if (b >= size_r || a >= size_r)
return (0);
while (b >= 0 || a >= 0 || flow == 1)
{
if (a < 0)
val = 0;
else
val = *(n1 + a) -'0';
if (b < 0)
val1 = 0;
else
val1 = *(n2 + b) -'0';
val2 = val + val1 + flow;
if (val2 >= 10)
flow = 1;
else
flow = 0;
if (numr >= (size_r - 1))
return (0);
*(r + numr) = (val2 % 10) + '0';
numr++;
a--;
b--;
}
if (numr == size_r)
return (0);
*(r + numr) = '\0';
rev_string(r);
return (r);
}
