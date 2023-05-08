/**
 * @file problem_4_c.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Write a C program to print every integer between 1 and n divisible by m. Also report
 * whether the number that is divisible by m is even or odd.
 *
 * @version 0.1
 * @date 08-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>

int main()
{
    char choice = 'N', newline_buffer;
    ;

    do
    {
        int n, m, count_divisible = 0; // count_divisible = to count the number of total multiples of m
        printf_s("Enter the values for n and m: ");
        scanf_s("%d %d", &n, &m);

        /**
         * @brief The for loop below calculates the multiples of m and check whether they are
         * even or odd.
         *
         * @version 0.1
         * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
         * @date 08-05-2023
         * @copyright Copyright (c) 2023
         */
        for (int i = 1; i <= n; ++i)
        {
            if (i % m == 0)     // To check whether the value of i is a multiple of m or not
            {
                if (i % 2 == 0) // To check whether the multiple is even or odd
                    printf_s("|\t%d\t|\teven\t|\n", i);
                else
                    printf_s("|\t%d\t|\todd\t|\n", i);

                ++count_divisible;
            }
        }

        printf_s("\nTotal divisible: %d\nTotal non-divisible: %d\n", count_divisible, (n - count_divisible));

        printf_s("\nDo you want to retry? ([Y/y]es or [N/n]o) ");
        newline_buffer = getchar(); // To ignore the newline character after the previous input
        choice = getchar();

        /**
         * @brief The if statement below checks the user choice and performs accordingly.
         *
         * @version 0.1
         * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
         * @date 08-05-2023
         * @copyright Copyright (c) 2023
         */
        if (choice == 'y' || choice == 'Y') // [Y/y]es = continue with the next do-while iteration
            continue;
        else if (choice == 'n' || choice == 'N')
        {
            printf_s("Operation finished!\n"); // [N/n]o = finish the do-while iteration

            break;
        }
        else // Default behaviour
            printf_s("Operation skipped!\n");

    } while (choice == 'Y' || choice == 'y');
}