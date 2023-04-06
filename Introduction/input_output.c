/**
 * @file input_output.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief C program to demonstrate the input and output stream functions available in library.
 * @version 0.1
 * @date 06-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>

int main()
{
    /**
     * @brief Take an integer as input and print it to stdout.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 06-04-2023
     * @copyright Copyright (c) 2023
     */
    int a;

    printf_s("Enter a number: ");
    // Take the number as input
    scanf_s("%d", &a);
    // To ignore the carriage return character at the end of the line
    char eof = getchar();
    // Print the number in stdout
    printf_s("Number = %d\n", a);

    /**
     * @brief Take a character as input and print it to stdout.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 06-04-2023
     * @copyright Copyright (c) 2023
     */
    char c;

    printf_s("Enter an alphanumeric character: ");
    // Take the character as input
    scanf_s("%c", &c);
    // Print the character in stdout
    printf_s("Character = %c\n", c);

    /**
     * @brief Take a floating point number as input and print it to stdout.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 06-04-2023
     * @copyright Copyright (c) 2023
     */
    float f;

    printf_s("Enter a floating point number: ");
    // Take the number as input
    scanf_s("%f", &f);
    // Print the number in stdout
    printf_s("Number = %f\n", f);

    /**
     * @brief Take a double floating point number as input and print it to stdout.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 06-04-2023
     * @copyright Copyright (c) 2023
     */
    double d;

    printf_s("Enter a double floating point number: ");
    // Take the number as input
    scanf_s("%lf", &d);
    // Print the number in stdout
    printf_s("Number = %lf\n", d);

    /**
     * @brief Usage of the getchar() and putchar() functions.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 06-04-2023
     * @copyright Copyright (c) 2023
     */
    char alphabet;

    printf_s("Enter a character: ");
    // carriage return character should be captured before the character variable
    eof = getchar();
    // Take the character as input
    alphabet = getchar();
    // Print the character in stdout
    printf_s("Character = ");
    putchar(alphabet);

    /**
     * @brief Take a string and print it in stdout
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 06-04-2023
     * @copyright Copyright (c) 2023
     */
    char string[] = "";

    printf_s("\nEnter a string: ");
    // carriage return character should be captured before the character variable
    eof = getchar();
    // Take the string as input
    gets_s(string, 100);
    // Print the string in stdout
    printf_s("String = ");
    puts(string);
}