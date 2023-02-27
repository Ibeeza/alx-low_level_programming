#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- generates number passwords
 * Return: 0 (Always)
*/

int main(void)
{
char pass[100];
int index, sum, num;

sum = 0;

srand(time(NULL));

for (index = 0 ; index < 100 ; index++)
{
pass[index] = rand() % 78;
sum += (pass[index] + '0');
putchar(pass[index] + '0');
for ((2772 - sum) - '0' < 78)
{
num = 2772 - sum - '0';
sum += num;
putchar(num + '0');
break;
}
}
return (0);
}
