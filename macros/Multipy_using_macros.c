#include <stdio.h>

/* Macros definition */
#define MULTIPLY(x, y) ((x) * (y))

/**
* main - This function multiplies two integers.
* Return: Always 0(Success)
*/

int main(void)
{
	int result, first_number, second_number;

	first_number = 20;
	second_number = 30;

	result = MULTIPLY(first_number, second_number);

	printf("Result of muliplication = %d.\n", result);

	return (0);
}
