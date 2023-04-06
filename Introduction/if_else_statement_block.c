/**
 * @file control_statements.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Illustrated control statements if, switch statements; and for, while, and do-while loops.
 * @version 0.1
 * @date 06-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 0, j = 0;

    printf_s("Enter two numbers: ");
    scanf_s("%d %d", &i, &j);

    /**
     * @brief If-else statement block to check if the numbers are equal.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 06-04-2023
     * @copyright Copyright (c) 2023
     */
    // Curly-braces are not necessary if there is only one statement inside the block.
    if (i == j)
    {
        printf_s("%d is equal to %d.\n", i, j);
    }
    else
    {
        printf_s("%d is not equal to %d.\n", i, j);
    }

    char weather, reply;

    printf_s("\nIs the weather sunny today? \nY. Yes; \nN. No;\n: ");
    int eof = getchar();
    weather = getchar();

    /**
     * @brief Nested if-else statement block and their execution order.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 06-04-2023
     * @copyright Copyright (c) 2023
     */
    // Outer if-else block
    if (weather == 'N' | weather == 'n')
    {
        printf_s("\nDo you have an umbrella then? \nY. Yes; \nN. No;\n: ");
        eof = getchar();
        reply = getchar();

        // Nested/inner if-else block
        if (reply == 'Y' | reply == 'y')
            printf_s("\nGood! You can go out.");
        else
            printf_s("\nBad! You can't go out.");
    }
    else
        printf_s("\nGood! You can go out.");
}