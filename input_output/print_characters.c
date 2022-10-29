#include <stdio.h>

/**
 * main - This prints out a series of characters.
 * Return: Always 0 on success, otherwise, 1.
 */

int main(void)
{
	int char1, char2, char3;

	char1 = 66;
	char2 = 'y';
	char3 = 101;

	putchar(char1);
	putchar(char2);
	putc(char3, stdout);
	putchar(10);

	return (0);

}
