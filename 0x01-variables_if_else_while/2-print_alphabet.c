#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter = 'a'; // Start with 'a', the first character of the alphabet

    // Loop through the alphabet until 'z'
    while (letter <= 'z')
    {
        putchar(letter); // Print the current letter
        letter++;        // Move to the next letter in the alphabet
    }

    putchar('\n'); // Print a new line after printing the alphabet

    return (0);
}
