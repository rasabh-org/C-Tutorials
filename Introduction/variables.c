/**
 * @file variables.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Introduction to numeric and character variables in C and printf functions to
 * print them on the output stream/console.
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
    /**
     * @brief Different types of numeric and character variables are assigned values.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 06-04-2023
     * @copyright Copyright (c) 2023
     */
    int x = 10, y = 20;
    float p = 0.11, q = 0.22;
    char a = 'a', b = 'b';

    /**
     * @brief Print the variables in order and give their values to the output stream.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 06-04-2023
     * @copyright Copyright (c) 2023
     */
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("p = %f\n", p);
    printf("q = %f\n", q);
    printf("a = %c\n", a);
    printf("b = %c\n", b);
}