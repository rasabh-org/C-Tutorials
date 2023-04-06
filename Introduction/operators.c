/**
 * @file operators.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief C program to illustrate different operators and their usage.
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
    int a = 0;
    float b = 0.0;

    printf_s("Enter an integer and a floating point number: ");
    // scanf_s syntax to take multiple input
    scanf_s("%d %f", &a, &b);
    printf_s("Values entered:\n%d\n%f", a, b);

    /**
     * @brief Arithmetic operators and their execution on two integer operands.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 06-04-2023
     * @copyright Copyright (c) 2023
     */
    // Post-increment operator
    printf_s("\na++ : %d\n", a++);
    // Post-decrement operator
    printf_s("\na-- : %d\n", a--);
    // Pre-increment operator
    printf_s("\n++a: %d\n", ++a);
    // Pre-decrement operator
    printf_s("\n--a: %d\n", --a);
    // Addition
    printf_s("\na + 10: %d\n", a + 10);
    // Subtraction
    printf_s("\na - 10: %d\n", a - 10);
    // Multiplication
    printf_s("\na * 10: %d\n", a * 10);
    // Division
    printf_s("\na / 10: %d\n", a / 10);
    // Modulusiation
    printf_s("\na %% 10: %d\n", a % 10);

    /**
     * @brief Arithmetic operators and their execution on two floating point operands.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 06-04-2023
     * @copyright Copyright (c) 2023
     */
    // Post-increment operator
    printf_s("\nb++ : %f\n", b++);
    // Post-decrement operator
    printf_s("\nb-- : %f\n", b--);
    // Pre-increment operator
    printf_s("\n++b: %f\n", ++b);
    // Pre-decrement operator
    printf_s("\n--b: %f\n", --b);
    // Addition
    printf_s("\nb + 10: %f\n", b + 10);
    // Subtraction
    printf_s("\nb - 10: %f\n", b - 10);
    // Multiplication
    printf_s("\nb * 10: %f\n", b * 10);
    // Division
    printf_s("\nb / 10: %f\n", b / 10);

    /**
     * @brief Relational operators and their execution on two operands.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 06-04-2023
     * @copyright Copyright (c) 2023
     */

    // Greater than
    printf_s("\na > b : %d\n", a > b);
    // Smaller than
    printf_s("\na < b : %d\n", a < b);
    // Greater than or equal
    printf_s("\na >= b : %d\n", a >= b);
    // Less than or equal
    printf_s("\na <= b : %d\n", a <= b);
    // Not equal
    printf_s("\na != b : %d\n", a != b);

    /**
     * @brief Logical operators and their execution on two operands.
     * 
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 06-04-2023
     * @copyright Copyright (c) 2023
     */

    // AND operator
    printf_s("\na > 0 & b < 0 : %d\n", a > 0 & b < 0);
    // OR operator
    printf_s("\na > 0 | b < 0 : %d\n", a > 0 | b < 0);
    // NOT operator
    printf_s("\n!(a != 0) : %d\n", !(a != 0));
}