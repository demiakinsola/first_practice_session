#include <stdio.h>

/**
 * main - This gets characters as inputs.
 * Return: Void.
 */

int main(void)
{
	int char1, char2, char3;

	printf("Enter three characters together: ");
	char1 = getchar(); /*assign input to variables */
	char2 = getc(stdin);
	char3 = getchar();

	printf("Thank you. Here is your input: ");

	putchar(char1);
	putc(char2, stdout);
	putchar(char3);
	putc(10, stdout);

	return (0);
}
