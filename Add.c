#include <stdio.h>

/**
* add_integers - This functions adds two integers.
* @x: First number parameter.
* @y: Second number parameter.
* Return: Integer that contains the result.
*/

int add_integers(int x, int y)
{
	int result;

	result = x + y;

	return (result);
}

/**
* main - Entry point.
* Return: Always 0(Success)
*/

int main(void)
{
	int sum, first_number, second_number;
i
	first_number = 20;
	second_number = 100;

	sum = add_integers(first_number, second_number);
/* The return value of the first function will be the sum */
/* When a function is called, it executes from the beginning of its own function */
/* It replaces the parameters with the arguments */

	printf("Sum of the two numbers is %d.\n", sum);
	return (0);
}
