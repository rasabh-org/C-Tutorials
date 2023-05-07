/**
 * @file problem_4_a.c
 * @author Raan_at_Git (Windows)
 * (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Write a C program to find the LCM and GCD of two numbers according to
 * user's preference.
 *
 * @version 0.1
 * @date 07-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <conio.h>
#include <stdio.h>

/**
 * @brief The below function handles the euclidean algorithm for finding GCD of two numbers.
 * It divides the large number by the small number, and returns the remainder.
 *
 * @version 0.1
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @date 07-05-2023
 * @copyright Copyright (c) 2023
 ****************************************************************************
 * @param l = large number.
 * @param s = small number.
 * @return
 */
int euclid_algorithm(int l, int s)
{
    return l % s;
}

/**
 * @brief This function finds the GCD of two numbers by using the euclidean algorithm
 * which is implemented in the function euclidean_algorithm().
 *
 * @version 0.1
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @date 07-05-2023
 * @copyright Copyright (c) 2023
 ****************************************************************************
 * @param m = number 1.
 * @param n = number 2.
 * @return
 */
int gcd(int m, int n)
{
    int large, small, remainder, result = 1;

    /**
     * @brief The if statement below checks which of the two numbers is larger than the other.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 07-05-2023
     * @copyright Copyright (c) 2023
     */
    if (m > n)
    {
        large = m;
        small = n;
    }
    else
    {
        large = n;
        small = m;
    }

    remainder = large % small;
    /**
     * @brief The if statement below returns the small number if the remainder is 0.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 07-05-2023
     * @copyright Copyright (c) 2023
     */
    if (remainder == 0)
        return small;

    /**
     * @brief The while loop below iterates until the remainder becomes 0 by calling the
     * euclidean_algorithm() function to find the GCD.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 07-05-2023
     * @copyright Copyright (c) 2023
     */
    while (remainder)
    {
        remainder = euclid_algorithm(large, small);

        /**
         * @brief In case the initial remainder of the division of large number by small number
         * is 0, the remainder will not be returned as the result.
         *
         * @version 0.1
         * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
         * @date 07-05-2023
         * @copyright Copyright (c) 2023
         */
        if (remainder > 0)
            result = remainder;

        large = small;
        small = remainder;
    }

    return result;
}

/**
 * @brief The function below finds the LCM of two numbers by using the gcd() function.
 *
 * @version 0.1
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @date 07-05-2023
 * @copyright Copyright (c) 2023
 ****************************************************************************
 * @param m = number 1.
 * @param n = number 2.
 * @return
 */
int lcm(int m, int n)
{
    return (m * n) / gcd(m, n);
}

int main()
{
    unsigned int num_1 = 0, num_2 = 0;
    char choice = 'N', newline_buffer; // newline_buffer = to ignore the newline characters
    /**
     * @brief The do-while loop below asks the user for consent to continue the operation again.
     * If the user input is [Y/y]es, then it will reiterate. Else it will break.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows)
     * (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 07-05-2023
     * @copyright Copyright (c) 2023
     */
    do
    {
        int op;

        printf_s("Enter two positive integers: ");
        scanf_s("%d %d", &num_1, &num_2);

        printf_s(
            "\nWhat do you want to find?\n\t(1) LCM; and\n\t(2) GCD.\nEnter "
            "choice: ");
        scanf_s("%d", &op);

        /**
         * @brief Construct a switch statement to perform LCM or GCD operation.
         *
         * @version 0.1
         * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
         * @date 07-05-2023
         * @copyright Copyright (c) 2023
         */
        switch (op)
        {
        case 1:
        {
            printf_s("The LCM of %d and %d is %d.\n\n", num_1, num_2, lcm(num_1, num_2));
        }
        break;
        case 2:
        {
            printf_s("The GCD of %d and %d is %d.\n\n", num_1, num_2, gcd(num_1, num_2));
        }
        break;
        default:
        {
            printf_s("\nWrong operation selected!!!\nTry again...\n\n");
        }
        break;
        }

        newline_buffer = getchar(); // To ignore the newline character after previous input

        printf_s("Do you want to repeat? ([Y/y]es or [N/n]o | default = 'N') ");
        choice = getchar();

        /**
         * @brief The if statement below checks the user choice and performs accordingly.
         *
         * @version 0.1
         * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
         * @date 07-05-2023
         * @copyright Copyright (c) 2023
         */
        if (choice == 'Y' || choice == 'y') // [Y/y]es = continue with the next iteration
            continue;
        else if (choice == 'N' || choice == 'n') // [N/n]o = Finish the do-while loop
            printf_s("Operation finished!!!\n");
        else // default operation
        {
            printf_s("Operation skipped!!!\n");

            break;
        }
    } while (choice != 'N' && choice != 'n');
}