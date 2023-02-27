#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- generates number passwords
 * Return: 0 (Always)
*/

int main(void)
{
char pass[84];
int index = 0;
int sum = 0;
int half1, half2;

srand(time(0));

while (sum < 2772)
{
pass[index] = 33 + rand() % 94;
sum += pass[index++];
}
pass[index] = '\0';
if (sum != 2772)
{
half1 = (sum - 2772) / 2;
half2 = (sum - 2772) / 2;
if ((sum -2772) % 2 != 0)
half1++;
for (index = 0 ; pass[index]; index++)
{
if (pass[index] >= (33 + half1))
{
pass[index] -= half1;
break;
}
}
for (index = 0 ; pass[index]; index++)
{
if (pass[index] >= (33 + half2))
{
pass[index] -= half2;
break;
}
}
}
printf("%s", pass);
return (0);
}