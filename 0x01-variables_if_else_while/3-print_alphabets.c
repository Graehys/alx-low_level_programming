#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase and uppercase
 *              separated by a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char lowercase = 'a';
    char uppercase = 'A';

    while (lowercase <= 'z')
    {
        putchar(lowercase);
        lowercase++;
    }

    while (uppercase <= 'Z')
    {
        putchar(uppercase);
        uppercase++;
    }

    putchar('\n');

    return (0);
}