/**
 * @file pointers.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Implementation of pointer variables in C.
 * @version 0.1
 * @date 07-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>

// Function declarations to perform arithmetic operations using the pointer reference.
int add(int *);
int sub(int *);
int div(int *);
int mul(int *);

int main()
{
    int var = 0, *point;

    printf_s("Enter an integer value: ");
    scanf_s("%d", &var);

    /**
     * @brief Pointer works by referring to the address of the variable.
     * The address of the variable is specified by using a '&' preceding the name of the variable.
     * The pointer name refers to the address. If the '*' is used preceding the name of the pointer,
     * then it will point to the value of the variable.
     * 
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 07-04-2023
     * @copyright Copyright (c) 2023
     */
    point = &var;

    /**
     * @brief A sample of printing the values of the pointer.
     * 
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 07-04-2023
     * @copyright Copyright (c) 2023
     */
    printf_s("\nValue of the variable: %d\n", var);
    printf_s("Value of the pointer: %d\n", point);
    printf_s("Value that the pointer points to: %d\n", *point);

    /**
     * @brief Printing the return value of pointer reference functions:
     * 1. add();
     * 2. sub();
     * 3. mul();
     * 4. div().
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 07-04-2023
     * @copyright Copyright (c) 2023
     */
    printf_s("\n%d + %d = %d\n", *point, *point, add(point));
    printf_s("\n%d - %d = %d\n", *point, *point, sub(point));
    printf_s("\n%d * %d = %d\n", *point, *point, mul(point));
    printf_s("\n%d / %d = %d\n", *point, *point, div(point));
}

// Function definition
int add(int *a)
{
    return *a + *a;
}
int sub(int *a)
{
    return *a - *a;
}
int div(int *a)
{
    return *a / *a;
}
int mul(int *a)
{
    return *a * *a;
}