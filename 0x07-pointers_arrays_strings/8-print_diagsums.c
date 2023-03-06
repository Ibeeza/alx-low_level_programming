#include "stdio.h"
#include "main.h"
/**
 * print_diagsums - start of my program
 * @a: enter
 * @size: enter
 * Return: 0
*/

void print_diagsums(int *a, int size)
{
int add1 = 0, add2 = 0, b;

for (b = 0 ; b < size ; b++)
{
add1 = add1 + a[b * size + b];
}
for (b = size - 1 ; b >= 0 ; b--)
{
add2 = add2 + a[b * size + (size - b - 1)];
}
printf("%d, %d\n", add1, add2);
}
