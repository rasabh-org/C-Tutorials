/**
 * @file function_prototypes.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Declaration, definition and calling a function from main() function of a simple calculator program.
 * @version 0.1
 * @date 07-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>

/**
 * @brief Function declarations take place here.
 * Their job may also be defined here at the same time.
 *
 * @return int
 * @version 0.1
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @date 07-04-2023
 * @copyright Copyright (c) 2023
 */

float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);

int main()
{
    float a = 0, b = 0;

    printf_s("Enter two fractional numbers: ");
    scanf_s("%f %f", &a, &b);

    /**
     * @brief Calling the declared function definitions.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 07-04-2023
     * @copyright Copyright (c) 2023
     */
    // Addition
    printf_s("\n%f + %f = %f\n", a, b, add(a, b));
    // Subtraction
    printf_s("\n%f - %f = %f\n", a, b, subtract(a, b));
    // Multiplication
    printf_s("\n%f * %f = %f\n", a, b, multiply(a, b));
    // Division
    printf_s("\n%f / %f = %f\n", a, b, divide(a, b));
}

/**
 * @brief Function definitions will take place here.
 *
 * @version 0.1
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @date 07-04-2023
 * @copyright Copyright (c) 2023
 */
// Addition function
float add(float a, float b)
{
    return a + b;
}
// Subtraction function
float subtract(float a, float b)
{
    return a - b;
}
// Multiplication function
float multiply(float a, float b)
{
    return a * b;
}
// Division function
float divide(float a, float b)
{
    return a / b;
}