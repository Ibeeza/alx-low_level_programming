#include <stdio.h>
/**
 * main-printing all the alphabets
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a' ; alphabets <= 'z' ; alphabets++)
	{
		putchar(alphabets);
	}
	for (alphabets = 'A' ; alphabets <= 'Z' ; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
