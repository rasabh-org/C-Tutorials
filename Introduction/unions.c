/**
 * @file unions.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Implementation of union user-defined data types in C.
 * @version 0.1
 * @date 07-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>

union ascii
{
    int ascii_value;
    char char_value;
} convert;

int main()
{
    int choice = 0;
    // To loop through the options menu.
    do
    {
        /**
         * @brief Since union data members share the memory address, thus they are interconnected.
         *
         * @version 0.1
         * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
         * @date 07-04-2023
         * @copyright Copyright (c) 2023
         */
        printf_s("Enter your choice:\n");
        printf_s("1. ASCII value;\n2. Character value;\n3. Exit.\n: ");
        scanf_s("%d", &choice);

        // To perform the action which is asked for.
        switch (choice)
        {
        case 1:
            printf_s("\nEnter the ASCII value: ");
            scanf_s("%d", &convert.ascii_value);

            printf_s("The corresponding character = %c\n\n", convert.char_value);
            break;
        case 2:
            printf_s("\nEnter the character: ");
            int eof = getchar();
            convert.char_value = getchar();

            printf_s("The corresponding ASCII value = %d\n\n", convert.ascii_value);
            break;
        case 3:
            break;
        default:
            printf_s("\nWrong input!\n\n");
            break;
        }
    } while (choice != 3);
}