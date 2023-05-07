/**
 * @file problem_3_c.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Write a C program to input principal amount and time (in years), then
 * (1) if time is more than 10 years, calculate the simple interest with rate 8%; otherwise,
 * (2) calculate the simple interest with rate 12% per annum.
 *
 * @version 0.1
 * @date 07-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>

float simple_interest(float p, float t, int r)
{
    return (p * t * r) / 100;
}

int main()
{
    float principal = 0.0, time = 0.0, interest = 0.0;
    char choice = 'N'; // Default choice (control variable) for the do-while iteration

    /**
     * @brief To ask the user for their choice to continue with the operation.
     * When the user inputs 'y' or 'Y', the program will continue with the next iteration.
     * Otherwise, the program if the user inputs 'n' or 'N', the program will exit. Entering
     * anything else will default to 'n'.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 07-05-2023
     * @copyright Copyright (c) 2023
     */
    do
    {
        printf_s("Enter the principal amount and time (in years): ");
        scanf_s("%f %f", &principal, &time);

        if (time > 10.0)
        {
            /**
             * @brief Interest is 8% per annum if time period is more than 10 years.
             *
             * @version 0.1
             * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
             * @date 07-05-2023
             * @copyright Copyright (c) 2023
             */
            interest = simple_interest(principal, time, 8);
        }
        else
        {
            /**
             * @brief Interest is 12% per annum if time period is less than or equal to 10 years.
             *
             * @version 0.1
             * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
             * @date 07-05-2023
             * @copyright Copyright (c) 2023
             */
            interest = simple_interest(principal, time, 12);
        }

        printf_s("\nThe interest is %f,\nThe total amount is %f.\n\n", interest, principal + interest);
        choice = getchar(); // To ignore the newline character entered during the previous input

        printf_s("Do you want to continue? ([Y/y]es or [N/n]o | default = N): ");
        choice = getchar(); // [Y/y]es | [N/n]o | default = N

        if (choice == 'y' || choice == 'Y')
            printf_s("\n"); // To print a new line before the next iteration
    } while (choice == 'Y' || choice == 'y');
}