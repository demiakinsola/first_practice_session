#include <stdio.h>

/* Macros definitions */
#define SUBTRACT(x, y) ((x) - (y))
#define VAL1 49120
#define VAL2 29817


/**
* main - This performs a subtraction operation.
* Return: Integer.
*/

int main(void)
{
	#ifdef SUBTRACT
	printf("SUBTRACT has been defined as a macro.\n");
	#endif

	#if VAL1
	printf("VAL1 has been defined as a macro.\n");
	printf("Value of VAL1 is: %d.\n", VAL1);
	#else
	printf("VAL1 was not defined as a macro.\n");
	#endif

	#if VAL2
	printf("VAL2 has been defined as a macro.\n");
	printf("Value of VAL2 is: %d.\n", VAL2);
	#else
	printf("VAL2 has not been defined.\n");
	#endif

	#if VAL3
	printf("VAL3 has been defined as a macro.\n");
	printf("Value of VAL3 is: %d.\n", VAL3);
	#else
	printf("VAL3 has not been defined as a macro.\n");
	#endif

	int result;

	result = SUBTRACT(VAL1, VAL2);
	printf("Result of subtraction is: %d.\n", result);
	return (0);
}
