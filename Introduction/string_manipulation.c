/**
 * @file string_manipulation.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief String declaration, usage, and string.h header file functions to manipulate strings.
 * @version 0.1
 * @date 07-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>
// String manipulation specific
#include <string.h>

int main()
{
    /**
     * @brief String declared as an array.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 07-04-2023
     * @copyright Copyright (c) 2023
     */
    // The last element of the string array (\0) indicates the end of the string.
    char string_array[20] = {'H', 'E', 'L', 'L', 'O', '\0'};

    // %s type specifier is used to indicate string type output.
    printf_s("Array string is => %s\n", string_array);

    /**
     * @brief String declared as a string!
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 07-04-2023
     * @copyright Copyright (c) 2023
     */
    char string_stream[20] = "Hello, World!";

    printf_s("String stream is => %s\n", string_stream);

    /**
     * @brief Library functions adapted from string.h header file.
     * 1. strlen();
     * 2. strcpy();
     * 3. strcmp();
     * 4. strncat();
     * 5. strlwr();
     * 6. strupr();
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 07-04-2023
     * @copyright Copyright (c) 2023
     */
    // strlen() = find the length of a string
    // Escape sequences are used to print single quotes inside the output.
    printf_s("\nLength of \'%s\': %d\n", string_array, (strlen(string_array) - 1));
    printf_s("Length of \'%s\': %d\n", string_stream, (strlen(string_stream) - 1));

    // strcpy()/strcpy_s() = Copy one string to another string
    strcpy_s(string_array, sizeof(string_stream), string_stream);

    // strcmp() = Compare two strings
    int is_equal = strcmp(string_array, string_stream);

    if (is_equal == 0)
        printf_s("\n%s = %s\n", string_stream, string_array);
    else
        printf_s("\n%s != %s\n", string_stream, string_array);

    char first_name[20] = "", last_name[20] = "";

    printf_s("Enter two strings: ");
    gets_s(first_name, sizeof(first_name));
    gets_s(last_name, sizeof(last_name));

    // strcat()/strcat_s() = Join/concatenate two strings
    strcat_s(first_name, sizeof(last_name), last_name);
    // Printing the destination string after concatenation.
    printf_s("Full name is %s.\n", first_name);

    // strlwr()/_strlwr_s() = Prints the string in lower case
    _strlwr_s(first_name, sizeof(first_name));
    printf_s("Full name is %s. (Lower case)\n", first_name);

    // strupr()/_strupr_s() = Prints the string in upper case
    _strupr_s(first_name, sizeof(first_name));
    printf_s("Full name is %s. (Upper case)\n", first_name);
}