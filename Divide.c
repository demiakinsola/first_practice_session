#include <stdio.h>
/**
* divide_integers - This function divides two integers.
* @x: First integer parameter.
* @y: Second integer parameter.
* Return: Integer as result.
*/

int divide_integers(int x, int y)
{
	int result;

	result = x / y;

	return (result);
}

/**
* main - Entry point.
* Return: Always 0(Success)
*/

int main(void)
{
	int result, first_number, second_number;

	first_number = 4250;
	second_number = 2;

	result = divide_integers(first_number, second_number);
	printf("Result of division = %d.\n", result);

	return (0);
}
