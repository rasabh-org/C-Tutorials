/**
 * @file problem_3_a.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Write a C program to input a number of integers and print the largest and smallest ones among them.
 * @version 0.1
 * @date 11-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>

int main()
{
    int amount_of_integers = 0, smallest = 0, largest = 0;

    printf_s("Enter the number of integers: ");
    scanf_s("%d", &amount_of_integers);

    int num[amount_of_integers];

    printf_s("Enter the integer values: ");
    for (int i = 0; i < amount_of_integers; i++)
        scanf_s("%d", &num[i]);

    printf_s("\nIntegers are:\t");

    smallest = largest = num[0];

    /**
     * @brief for-loop iteration to check each value in the array whether it matches the two
     * if conditions.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 11-04-2023
     * @copyright Copyright (c) 2023
     */
    for (int i = 0; i < amount_of_integers; i++)
    {
        printf_s("%d\t", num[i]);

        // if statement to find the largest number
        if (largest <= num[i])
            largest = num[i];

        // if statement to find the smallest number
        if (smallest >= num[i])
            smallest = num[i];
    }
    printf_s("\nLargest: %d", largest);
    printf_s("\nSmallest: %d", smallest);
}