/**
 * @file problem_1_b.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Write a program that asks the user to enter the number of gallons, then displays the equivalent in cubic feet,
 * and vice versa.
 * @version 0.1
 * @date 07-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>

// Functions declarations for conversions
float gal_to_cubic(float *gal)
{
    return (1.0 / 7.481) * *gal;
}
float cubic_to_gal(float *cubic)
{
    return 7.481 * *cubic;
}

int main()
{
    int choice = 0;
    float gallons = 0.0, cubic_feet = 0.0;

    do
    {
        printf_s("Enter your choice:\n");
        printf_s("1. gallons-to-cubic-feet;\n2. Cubic-to-gallons;\n3. Exit.\n: ");
        scanf_s("%d", &choice);

        switch (choice)
        {
        case 1:
            // Take input in gallons
            printf_s("\nEnter the amount in gallons: ");
            scanf_s("%f", &gallons);

            // Convert gallons into cubic feets and print it
            printf_s("Amount in cubic feet = %f\n", gal_to_cubic(&gallons));
            break;
        case 2:
            // Take input in cubic feet
            printf_s("\nEnter the amount in cubic feet: ");
            scanf_s("%f", &cubic_feet);

            // Convert cubic feets into gallons and print it
            printf_s("Amount in gallons = %f\n", cubic_to_gal(&cubic_feet));
            break;
        case 3:
            break;
        default:
            printf_s("\nWrong input!\nTry again...\n");
            break;
        }

    } while (choice != 3);
}