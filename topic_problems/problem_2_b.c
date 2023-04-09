/**
 * @file problem_2_b.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Write a program to find whether a given number is even or odd.
 * @version 0.1
 * @date 09-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>

int main()
{
    int num = 0, choice = 0;

    do
    {
        printf_s("Enter your choice:\n");
        printf_s("1.Find whether a number is even or odd;\n2. Exit.\n: ");
        scanf_s("%d", &choice);

        switch (choice)
        {
        case 1:
            printf_s("\nEnter number: ");
            scanf_s("%d", &num);

            /**
             * @brief If a number is even, then dividing the number by 2 will leave remainder 0.
             * Otherwise, it will leave remainder 1.
             *
             * @version 0.1
             * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
             * @date 09-04-2023
             * @copyright Copyright (c) 2023
             */
            // % (modulus) operator is used to find the remainder of a division operation
            if ((num % 2) == 0)
                printf_s("That is an even number!\n");
            else
                printf_s("That is an odd number!\n");

            break;
        case 2:
            break;
        default:
            printf_s("\nWrong choice!\nTry again...\n");
            break;
        }
    } while (choice != 2);
}