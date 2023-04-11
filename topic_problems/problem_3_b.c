/**
 * @file problem_3_b.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Write a program that reads in a character from the keyboard, and then displays one of the following messages:
 * 1. If character is lowercase, then its uppercase version;
 * 2. If character is uppercase, then its lowercase version; otherwise
 * 3. If the character is not a letter, then print "not a letter."
 * @version 0.1
 * @date 11-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>

int main()
{
    char letter = ' ';

    printf_s("Enter any English alphabet or decimal number: ");
    letter = getchar();

    /**
     * @brief To check whether the letter is lower or upper case, we use an if-else statement block.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 12-04-2023
     * @copyright Copyright (c) 2023
     */
    if (letter >= 'a' && letter <= 'z')
        // lowercase letter - 32 = uppercase letter
        printf_s("The uppercase version corresponding to %c is %c.\n", letter, letter - 32);
    else if (letter >= 'A' && letter <= 'Z')
        // uppercase letter + 32 = lowercase letter
        printf_s("The lowercase version corresponding to %c is %c.\n", letter, letter + 32);
    else
        printf_s("%c is not a letter.\n", letter);
}