/**
 *
 * @file type_casting.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief C program to demonstrate type casting i.e. conversion of one data type to another.
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
     * @brief To find the difference between type casting format:
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 06-04-2023
     * @copyright Copyright (c) 2023
     */
    int n = 100;
    printf("n = %d\n", n);
    // Format (1) [implicit conversion]
    printf("n + 50.45 = %f\n", n + 50.45);

    // Format (2) [implicit conversion]
    n += 50.45;
    printf("n + 50.45 = %d\n", n);

    // Format (3) [explicit conversion]
    n -= 50.45;
    float f = (float)n / 15;
    printf("f = %f\n", f);
}