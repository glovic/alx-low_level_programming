#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the alphabet in lowercase,
 *              followed by the alphabet in uppercase, and then a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
        char letter = 'a';

        while (letter <= 'z' || letter <= 'Z')
        {
                putchar(letter);
                if (letter == 'z')
                        letter = 'A' - 1; /* Reset to 'A' if we've reached 'z'*/
                letter++;
        }

        putchar('\n');

        return (0);
}
