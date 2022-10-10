#include <stdio.h>

/**
* subtract_integers - This subtracts an integer from another.
* @x: First input parameter.
* @y: Second input parameter.
* Return: Integer as result.
*/

int subtract_integers(int x, int y)
{
	int result;

	result = x - y;

	return (result);
}

/**
* main - Entry point.
* Return: Always 0(Success)
*/

int main(void)
{
	int result, first_number, second_number;

/* FYI, the result variable is different from the one in the first function. */
/* I used it because I couldn't think of another name */

	first_number = 14258;
	second_number = 5014;
/* assign the return value to a variable to be able to print */
	result = subtract_integers(first_number, second_number);
	printf("Result of subtraction is: %d.\n", result);

	return (0);
}
