/**
 * @file array_initialization.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Implementation of static and dynamic array initialization.
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
    /**
     * @brief Static initialisation of array and printng the array elements in order of their indices.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 07-04-2023
     * @copyright Copyright (c) 2023
     */
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};

    printf_s("Vowel sequence in English:\n");

    for (int i = 0; i < sizeof(vowels); i++)
        printf_s("%c\t", vowels[i]);

    /**
     * @brief Dynamic initialization of array and printing the array elements in order of their indices.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 07-04-2023
     * @copyright Copyright (c) 2023
     */
    int arr_size;

    printf_s("\n\nEnter the number of characters that you want to display: ");
    scanf_s("%d", &arr_size);

    char alphabets[arr_size];

    printf_s("Now enter the characters: ");
    int eof = getchar();

    // for loop to take input and  dynamically initialize the array elements.
    for (int i = 0; i < arr_size; i++)
    {
        alphabets[i] = getchar();
        eof = getchar();
    }

    printf_s("The characters are:\n");

    for (int i = 0; i < arr_size; i++)
        printf_s("%c\t", alphabets[i]);
}