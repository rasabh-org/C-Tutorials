/**
 * @file problem_2_a.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Write a program to find area of a triangle.
 * @version 0.1
 * @date 09-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>
// To use the library function sqrt()
#include <math.h>

int main()
{
    int choice = 0;
    float a = 0.0, b = 0.0, c = 0.0, s = 0.0;

    do
    {
        printf_s("Enter your choice:\n");
        printf_s("1. Find area of the triangle using Heron's Formula;\n2. exit.\n: ");
        scanf_s("%d", &choice);

        switch (choice)
        {
        case 1:
            printf_s("Enter the length of the edges of the triangle: ");
            scanf_s("%f %f %f", &a, &b, &c);

            /**
             * @brief Heron's formula for finding the area of the triangle using the lengths of the edges.
             *
             * @version 0.1
             * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
             * @date 09-04-2023
             * @copyright Copyright (c) 2023
             */
            s = (a + b + c) / 2.0;
            printf_s("Area = %f\n", sqrt(s * (s - a) * (s - b) * (s - c)));

            break;
        case 2:
            break;
        default:
            printf_s("\nWrong choice!\nTry again...\n");
        }
    } while (choice != 2);
}