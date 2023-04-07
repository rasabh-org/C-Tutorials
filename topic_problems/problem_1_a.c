/**
 * @file problem_1_a.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Write a C program that reads temperature in Celsius, displays it in Fahrenheit and vice versa.
 * @version 0.1
 * @date 07-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>

// Functions to convert temperature units
float cel_to_fah(float cel)
{
    return (cel * (9.0 / 5.0)) + 32;
}
float fah_to_cel(float fah)
{
    return (fah - 32) * (5.0 / 9.0);
}

int main()
{
    int choice = 0;
    float celsius = 0.0, fahrenheit = 0.0;

    do
    {
        printf_s("Enter your choice:\n");
        printf_s("1. celsius-to-fahrenheit;\n2. fahrenheit-to-celsius;\n3. Exit.\n: ");
        scanf_s("%d", &choice);

        switch (choice)
        {
        case 1:
            // Take the temperature input in Celsius units
            printf_s("\nEnter the temperature in celsius units: ");
            scanf_s("%f", &celsius);

            // convert Celsius into Fahrenheit and print it
            printf_s("The temperature in fahrenheit units: %f\n", cel_to_fah(celsius));
            break;
        case 2:
            // Take the temperature input in Fahrenheit units
            printf_s("\nEnter the temperature in fahrenheit units: ");
            scanf_s("%f", &fahrenheit);

            // convert Fahrenheit into Celsius and print it
            printf_s("The temperature in celsius units: %f\n", fah_to_cel(fahrenheit));
            break;
        case 3:
            break;
        default:
            printf_s("Wrong choice!\nTry again...\n");
            break;
        }
    } while (choice != 3);
}