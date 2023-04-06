/**
 * @file switch_statement_block.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Demonstration of the switch statement block.
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
    int week_day;

    printf_s("Enter the number of a day of the week: ");
    scanf_s("%d", &week_day);

    printf_s("\nThe day is ");
    /**
     * @brief Construct a new switch object to display the name of the day of the week.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 06-04-2023
     * @copyright Copyright (c) 2023
     */
    switch (week_day)
    {
    // case may be an integer, character, floating-point number or a string.
    case 1:
        printf("Monday.");
        break;
    case 2:
        printf("Tuesday.");
        break;
    case 3:
        printf("Wednesday.");
        break;
    case 4:
        printf("Thursday.");
        break;
    case 5:
        printf("Friday.");
        break;
    case 6:
        printf("Saturday.");
        break;
    case 7:
        printf("Sunday.");
        break;
    default:
        printf_s("\nWrong week day number!\n");
        // break is not necessary here.
        break;
    }
}