/**
 * @file problem_4_e.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Write a program to find the sum of the following series:
 *      x^2   x^3    x^4    x^5    x^6
 * x - ---- + ---- - ---- + ---- - ----
 *      2!     3!     4!     5!     6!
 *
 * @version 0.1
 * @date 08-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>
#include <math.h>    // To use the pow() function
#include <stdbool.h> // To use the 'bool' datatype

/**
 * @brief The following function finds the factorial of the number passed as argument.
 *
 * @version 0.1
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @date 08-05-2023
 * @copyright Copyright (c) 2023
 ****************************************************************************
 * @param n = the number whose factorial needs to be found
 * @return the factorial of n.
 */
unsigned int factorial(int n)
{
    int control = n;

    while (--control)
    {
        n *= control;
    }

    return n;
}

int main()
{
    int choice = 0;
    do
    {

        printf_s("OPERATION MENU\n\t(1) Enter limit;\n\t(2) Exit.\nEnter choice: ");
        scanf_s("%d", &choice);

        /**
         * @brief The following switch statement handles the user's choice of operation.
         * (1) Case 1: ask for the initial term and then perform the operation using the
         * factorial() and pow() functions.
         * (2) Case 2: Exit from the program.
         *
         * @version 0.1
         * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
         * @date 08-05-2023
         * @copyright Copyright (c) 2023
         */
        switch (choice)
        {
        case 1:
        {
            int limit = 1, denominator = 2;
            double sum = 0, input;  // To take the value of x in the series as the inital input and sum up the rest
            bool alter_sign = true; // To alter the sign (+/-) operation for each subsequent terms

            printf_s("\nEnter the first term of the series: ");
            scanf_s("%lf", &input);

            if (input == 0)
            {
                printf_s("The sum of the series is %lf.\n\n", input);

                break;
            }
            else
                sum = input;

            /**
             * @brief The while loop below sums up the values in sequence and then displays it.
             * Since initial value of sum is 1, therefore the loop test expression pre-decreases the
             * limit so that the loop iterates limit - 1 times instead.
             *
             * @version 0.1
             * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
             * @date 08-05-2023
             * @copyright Copyright (c) 2023
             */
            while (limit < 6)
            {
                denominator = limit + 1;

                /**
                 * @brief The if statement below checks the alter_sign variable and acts as described below:
                 * (1) If alter_sign = true (1), then subtract the next term from the current term; else
                 * (2) If alter_sign = false (0), then add the next term to the current term; and
                 * (3) Update the alter_sign variable with the opposite boolean value.
                 *
                 * @version 0.1
                 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
                 * @date 08-05-2023
                 * @copyright Copyright (c) 2023
                 */
                if (alter_sign) // If the term is the odd one
                {
                    // Since pow() function only accepts float arguments, therefore type casting is used
                    sum -= (double)(pow(input, (float)denominator) / factorial(denominator));

                    alter_sign = false; // Perform addition in next iteration
                }
                else // If the term is the even one
                {
                    // Since pow() function only accepts float arguments, therefore type casting is used
                    sum += (double)(pow(input, (float)denominator) / factorial(denominator));

                    alter_sign = true; // Perform subtraction in the next iteration
                }

                ++limit;
            }

            printf_s("The sum of the series is %lf.\n\n", sum);
        }
        break;
        case 2:
            printf_s("Operation finished!!!\n");
            break;
        default:
            printf_s("\nWrong choice!!!\nTry again...\n\n");
            break;
        }
    } while (choice != 2);
}