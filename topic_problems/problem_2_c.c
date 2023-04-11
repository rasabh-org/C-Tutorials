/**
 * @file problem_2_c.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Write a program to compute simple interest and compound interest.
 * @version 0.1
 * @date 09-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>

// Function definition to compute simple interest
float simple_interest(float *, float *, float *);
float compound_interest(float *, int *);

int main()
{
    int choice = 0, compounding = 0;
    float principal = 0.0, time = 0.0, rate = 0.0, total = 0.0;

    do
    {
        printf_s("Enter your choice:\n");
        printf_s("1. Simple interest;\n2. Compound interest;\n3. Exit.\n: ");
        scanf_s("%d", &choice);

        switch (choice)
        {
        case 1:
            /**
             * @brief switch case for the calculation of simple interest.
             *
             * @version 0.1
             * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
             * @date 11-04-2023
             * @copyright Copyright (c) 2023
             */
            printf_s("\nEnter the principal amount, time period (in years), and rate of interest (yearly): ");
            scanf_s("%f %f %f", &principal, &time, &rate);

            total = simple_interest(&principal, &time, &rate) + principal;

            printf_s("\nSimple interest = %f\n", total - principal);
            printf_s("Total payable = %f\n\n", total);

            break;
        case 2:
            /**
             * @brief switch case for the calculation of compound interest.
             *
             * @version 0.1
             * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
             * @date 11-04-2023
             * @copyright Copyright (c) 2023
             */
            printf_s("\nEnter the principal amount, time period (in years), rate of interest (yearly), and number of compounding (yearly): ");
            scanf_s("%f %f %f %d", &principal, &time, &rate, &compounding);

            float amount = 1;
            // for-loop to calculate the power
            for (int i = 0; i < compounding * time; i++)
            {
                // Returns the base of the power and assigns it to amount variable
                amount *= compound_interest(&rate, &compounding);
            }

            // Total is calculated by multiplying the principal amount from the amount variable
            total = principal * amount;
            amount = 1;

            printf_s("\nCompound Interest: %f\n", total - principal);
            printf_s("Total payable: %f\n\n", total);

            break;
        case 3:
            break;
        default:
            printf_s("\nWrong choice!\nTry again...\n");
            break;
        }
    } while (choice != 3);
}

float simple_interest(float *p, float *t, float *r)
{
    return (*p * *t * *r) / 100;
}
float compound_interest(float *r, int *c)
{
    return (1 + (*r / (*c * 100)));
}