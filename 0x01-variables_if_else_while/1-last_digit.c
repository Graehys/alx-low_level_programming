#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Prints the last digit of a randomly generated number.
 *              Prints whether the last digit is greater than 5, 0, or less than 6 and not 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));  /* Seed rand() with current time */

	n = rand();  /* Generate a random number */
	last_digit = n % 10;  /* Get the last digit of n */

	printf("Last digit of %d is %d and is ", n, last_digit);

	if (last_digit > 5)
		printf("greater than 5\n");
	else if (last_digit == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");

	return (0);
}
