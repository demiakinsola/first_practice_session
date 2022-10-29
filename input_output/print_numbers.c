#include <stdio.h>

/**
 * main - This displays and aligns two numbers.
 * Return: 0 on success, otherwise 1.
 */

int main(void)
{
	printf("%-8d\n", 123);
	printf("%3f\n", 123.456);
	printf("%8d\n", 123);
	printf("%08d\n", 123);
	printf("%8f\n", 123.456);
	printf("%f\n", 123.456);

	return (0);
}
