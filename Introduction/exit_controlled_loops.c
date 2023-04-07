/**
 * @file exit_controlled_loops.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief C implementation of exit controlled loops (do-while).
 * @version 0.1
 * @date 07-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>

int main()
{
    int choice = 0;

    /**
     * @brief A do-while loop to prompt a choice screen to the user, which will execute at least once.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 07-04-2023
     * @copyright Copyright (c) 2023
     */
    do
    {
        printf_s("Enter your choice:\n");
        printf_s("1. Weather;\n2. Health;\n3. Traffic;\n4. Exit.\n: ");
        scanf_s("%d", &choice);

        // switch case to perform the actions.
        switch (choice)
        {
        case 1:
            printf_s("\nWeather is sunny with little chance of rain!\n\n");
            break;
        case 2:
            printf_s("\nHealth is good with normal cholesterol level!\n\n");
            break;
        case 3:
            printf_s("\nTraffic is light with little delay!\n\n");
            break;
        case 4:
            break;
        default:
            printf_s("\nWrong input!\n\n");
            break;
        }
        // while checks the input and exits the loop if true.
    } while (choice != 4);
}