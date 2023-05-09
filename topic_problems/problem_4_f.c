/**
 * @file problem_4_f.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Write a C program to find the sum of the series:
 * S = 1 + x + x^2 + x^3 + ... + x^n
 *
 * @version 0.1
 * @date 09-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>
#include <math.h> // To use the pow() function

int main()
{
    int choice = 0;
    do
    {
        printf_s("OPERATION MENU\n\t(1) Enter the values;\n\t(2) Exit.\nEnter choice: ");
        scanf_s("%d", &choice);

        /**
         * @brief The switch statement below checks the user choice and acts accordingly.
         *
         * @version 0.1
         * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
         * @date 09-05-2023
         * @copyright Copyright (c) 2023
         */
        switch (choice)
        {
        case 1:
        {
            int power = 1;
            float x = 0.0;
            double sum = 1.0;

            printf_s("\nEnter the value of x and the last term: ");
            scanf_s("%f %d", &x, &power);

            /**
             * @brief The while loop below calculates the power of x in each iteration and
             * sums it to the output of the next iteration.
             *
             * @version 0.1
             * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
             * @date 09-05-2023
             * @copyright Copyright (c) 2023
             */
            while (--power)
            {
                sum += pow(x, (float)(power));
            }

            printf_s("The sum of the series is %f\n\n", sum);
        }
        break;
        case 2:
            printf_s("\nOperation finished!\n");
            break;
        default:
            printf_s("\nWrong choice!!!\nTry again...\n\n");
            break;
        }

    } while (choice != 2);
}