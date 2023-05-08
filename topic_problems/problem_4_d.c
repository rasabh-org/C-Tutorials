/**
 * @file problem_4_d.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Write a C program to sum the sequence:
 *      1      1      1
 * 1 + ---- + ---- + ---- + ...
 *      1!     2!     3!
 *
 * @version 0.1
 * @date 08-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>

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
         * (1) Case 1: ask for sequence limit and then perform the summation operation using the
         * factorial() function.
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
            int limit = 0, denominator = 1;
            double sum = 1;

            printf_s("\nEnter the limit to which you want to sum up: ");
            scanf_s("%d", &limit);

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
            while (--limit)
            {
                denominator = limit;
                sum += (double)(1.0 / factorial(denominator));
            }

            printf_s("The sum of the sequence is %f\n\n", sum);
        }
        break;
        case 2:
        {
            printf_s("Operation finished!!!\n");
        }
        break;
        default:
            printf_s("\nWrong choice!!!\nTry again...\n\n");
            break;
        }
    } while (choice != 2);
}