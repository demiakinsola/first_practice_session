#include <stdio.h>

/* Macros definition */
#define DIVIDE(x, y) ((x) / (y))

/**
* main - This divides two integers using macros.
* Return: Integer
*/

int main(void)
{
	int result, val1, val2;

	val1 = 1200;
	val2 = 60;

	printf("Awaiting result...\n");
	result = DIVIDE(val1, val2);

	printf("Result of division: %d.\n", result);
	return (0);
}
