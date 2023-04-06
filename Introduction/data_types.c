/**
 * @file data_types.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Introduction to data types in C and how to use them.
 * @version 0.1
 * @date 06-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>
// To use bool data types.
#include <stdbool.h>

int main()
{
    /**
     * @brief Declaration of variables with different primitive data types
     * and assign values to them.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 06-04-2023
     * @copyright Copyright (c) 2023
     */
    char a = 'a';
    int b = 100;
    float c = 500.50;
    double d = 15.154245;
    bool e = true;
    bool f = false;

    /**
     * @brief Printf() function to print the values of different data types.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 06-04-2023
     * @copyright Copyright (c) 2023
     */
    printf("a = %c\n", a);
    printf("b = %d\n", b);
    printf("c = %f\n", c);
    printf("d = %lf\n", d);
    printf("e = %d\n", e);
    printf("f = %d\n", f);
}
