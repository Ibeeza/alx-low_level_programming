#include <stdio.h>
/**
 * main-are they real
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int ascend;

	for (ascend = 0 ; ascend < 10 ; ascend++)
	{
		putchar((ascend % 10) + '0');
		if (ascend != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
