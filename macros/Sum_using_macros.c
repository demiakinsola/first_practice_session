#include <stdio.h>

/* Macro definitions */
#define SUM(x, y, z) ((x) + (y) + (z))

/**
* main - This adds two integers using macro definitions
* Return: Integer.
*/

int main(void)
{
	int result, val1, val2, val3;

	val1 = 400;
	val2 = 900 - val1;
	val3 = 500;

	result = SUM(val1, val2, val3);

	printf("First value is: %d.\nSecond value is: %d.\nThird value is: %d.\n", val1, val2, val3);
	printf("Value of result is: %d.\n", result);
	return (0);
}
