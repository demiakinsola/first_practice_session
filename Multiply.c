#include <stdio.h>

/**
* multiply_integers - This function multiplies two integers.
* @x: First integer parameter.
* @y: Second integer parameter.
* Return: Integer as result.
*/

int multiply_integers(int x, int y)
{
	int result;

	result = x * y;

	return (result);
}

/**
* main - Entry point.
* Return: Always 0(Success)
*/

int main()
{
	int result, first_number, second_number;

	first_number = 120;
	second_number = 100;

	result = multiply_integers(first_number, second_number);
	printf("Result of multiplication is %d.\n", result);
	return (0);
}
