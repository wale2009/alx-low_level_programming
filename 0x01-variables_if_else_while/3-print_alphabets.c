#include <stdio.h>

/**
 *main - print lower and uppercase alphabet
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /*print lowercases a-z*/
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z') /*print uppercase A-Z*/
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}
