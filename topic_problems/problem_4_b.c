/**
 * @file problem_4_b.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Write a C program to find whether the numbers in a given list are palindrome
 * or not. Use a structure to implement the algorithm.
 *
 * @version 0.1
 * @date 08-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>

/**
 * @brief The structure organises the variables necessary to verify each number as palindrome.
 *
 * @version 0.1
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @date 08-05-2023
 * @copyright Copyright (c) 2023
 */
struct verify_palindrome
{
    unsigned int orig, rev, rem, num;
};

/**
 * @brief The function below checks each number using an algorithm (described inside the function)
 * whether the number is a palindrome or not. Then it displays the output.
 *
 * @version 0.1
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @date 08-05-2023
 * @copyright Copyright (c) 2023
 ****************************************************************************
 * @param number = struct verify_palindrome object
 */
void display(struct verify_palindrome number)
{
    /**
     * @brief The while-loop constitute of the main algorithm which functions as below:
     * (1) Take the input and find the remainder when divided by 10. This will give the least
     * significant digit of the number.
     * (2) Apply the division algorithm in the reversed number such as it is multiplied by 10 and
     * the previous remainder is added to it.
     * reversed number = reversed number * 10 + remainder
     * (3) Divide the input by 10 so that the least significant digit gets cancelled out (since input
     * is an integer, not a float) and only the remaining digits are worked upon by the loop in
     * the next iteration.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 08-05-2023
     * @copyright Copyright (c) 2023
     */
    while (number.num)
    {
        number.rem = number.num % 10;
        number.rev = (number.rev * 10) + number.rem;
        number.num /= 10;
    }

    if (number.orig == number.rev)
        printf_s("The number %d is a palindrome!\n", number.orig);
    else
        printf_s("The number %d is not a palindrome!\n", number.orig);
}

int main()
{
    int choice = 0;

    do
    {
        int integers = 0;

        printf_s("OPERATIONS MENU:\n\t(1) Check palindrome;\n\t(2) Exit.\nEnter choice: ");
        scanf_s("%d", &choice);

        /**
         * @brief Construct a new switch statement to execute the selected operation in the menu.
         *
         * @version 0.1
         * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
         * @date 08-05-2023
         * @copyright Copyright (c) 2023
         */
        switch (choice)
        {
        case 1:
        {
            printf_s("\nHow many integers do you want to check? ");
            scanf_s("%d", &integers);

            struct verify_palindrome palindrome[integers];

            /**
             * @brief The while loop below iterates the same number of times as that of the size of the
             * struct object array. The test expression works  as below:
             * (1) Since struct object array size (integers) is 1 less than the actual value of the variable,
             * therefore the variable is pre-decreased and compared against -1.
             * (2) The algorithm gives the range of iterations from 0 to (integers - 1).
             *
             * @version 0.1
             * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
             * @date 08-05-2023
             * @copyright Copyright (c) 2023
             */
            while ((--integers) > -1)
            {
                palindrome[integers].rev = palindrome[integers].orig = palindrome[integers].rem = 0;

                printf_s("\nEnter the original integer: ");
                scanf_s("%d", &palindrome[integers].num);

                palindrome[integers].orig = palindrome[integers].num; // To save the original integer as backup for later comparison

                display(palindrome[integers]);
            }

            printf_s("\n");
        }
        break;
        case 2:
            break;
        default:
        {
            printf_s("\nWrong choice!!!\nTry again...\n\n");
        }
        break;
        }
    } while (choice != 2);
}