#include "main.h"
#include <stdio.h>
/**
 * print_array- my array has values?
 * @a:parameter 1
 * @n:parameter 2
*/

void print_array(int *a, int n)
{
int o = 0;
for (o = 0; o < n ; o++)
{
printf("%d", a[o]);
if (o < n - 1)
{
printf(", ");
}
}
puts("");
}
