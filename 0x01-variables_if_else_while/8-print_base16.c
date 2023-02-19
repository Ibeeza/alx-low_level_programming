#include <stdio.h>
/**
 * main-hexadecimal mode
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char numbers;
	char alphabets;

	for (numbers = 0 ; numbers < 10 ; numbers++)
	{
		putchar((numbers % 10) + '0');
	}
	for (alphabets = 'a' ; alphabets < 'g' ; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
