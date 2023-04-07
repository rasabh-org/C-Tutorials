/**
 * @file problem_1_c.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Write a C program that accepts radius of a circle, prints its area, and vice versa.
 * @version 0.1
 * @date 07-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>
// For the sqrt() library function to find the square root.
#include <math.h>

// Function declarations for conversions
float find_area(float *radius)
{
    return 3.14 * (*radius) * (*radius);
}
float find_radius(float *area)
{
    return sqrt(*area / 3.14);
}

int main()
{
    int choice = 0;
    float radius = 0.0, area = 0.0;

    do
    {
        printf_s("Enter your choice:\n");
        printf_s("1. Find area;\n2. Find radius;\n3. Exit\n: ");
        scanf_s("%d", &choice);

        switch (choice)
        {
        case 1:
            // Take the radius as input
            printf_s("\nEnter radius: ");
            scanf_s("%f", &radius);

            // Then find the area using the function
            printf_s("Then area of the circle = %f\n", find_area(&radius));
            break;
        case 2:
            // Take the area as input
            printf_s("\nEnter area: ");
            scanf_s("%f", &area);

            // Then find the radius using the function
            printf_s("Then radius of the circle = %f\n", find_radius(&area));
            break;
        case 3:
            break;
        default:
            printf_s("\nWrong input!Try again...\n");
            break;
        }
    } while (choice != 3);
}