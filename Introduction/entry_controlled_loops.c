/**
 * @file entry_controlled_loops.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief C program to demonstrate entry controlled loops (for(), while()).
 * @version 0.1
 * @date 06-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>

int main() {
    int i;

    printf_s("Enter a number: ");
    scanf_s("%d", &i);

    /**
     * @brief for loop to print the next 10 numbers in the progression.
     * 
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 06-04-2023
     * @copyright Copyright (c) 2023
     */
    printf_s("\nUsing for loop:\n");
    for (int j = (i + 1); j < (i + 11); j++)
        // Curly braces are not needed if there is only one statement.
        printf_s("%d\t", j);

    printf_s("\nUsing while loop:\n");
    /**
     * @brief while loop to print the next 10 numbers in the progression.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 06-04-2023
     * @copyright Copyright (c) 2023
     */
    int j = i + 10;
    while (i < j)
        // Curly braces are not needed if there is only one statement.
        printf_s("%d\t", ++i);

    return 0;
}