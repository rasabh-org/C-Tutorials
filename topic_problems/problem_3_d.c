/**
 * @file problem_3_d.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Write a C program to input a student type ('A' or 'B'). If the student type is 'A',
 * initialize the college account with 200/-. Otherwise, initialize the hostel account with 200/-.
 *
 * @version 0.1
 * @date 07-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>
#include <stdbool.h> // In order to use 'bool' datatype variables

/**
 * @brief Structure definition to operate on the following data members:
 * (1) name = to hold the name of the student;
 * (2) class = to hold the class of the student;
 * (3) hostel = to hold the requirement ofh= hostel facility as a boolean value; and
 * (4) college_account, hostel_account = to initialize the necessary account balance.
 *
 * @version 0.1
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @date 07-05-2023
 * @copyright Copyright (c) 2023
 */
struct college_student
{
    char name[50];                         // To hold the name
    int class;                             // To hold the class
    bool hostel;                           // To avail the hostel facility
    float college_account, hostel_account; // To initialize the account
};

/**
 * @brief The below function is used to ask the user to enter  the required details
 * of the student, and initialize the college or hostel account accordingly.
 *
 * @version 0.1
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @date 07-05-2023
 * @copyright Copyright (c) 2023
 ****************************************************************************
 * @param num_stud = number of students.
 * @param i = student display counter.
 * @param student = struct datatype object pointer to accept passed struct datatype array.
 */
void register_student(int num_stud, int i, struct college_student *student)
{
    printf_s("\nEnter the student (%d) name: ", i);
    gets_s(student[num_stud].name, sizeof(student[num_stud].name));

    /**
     * @brief do-while loop to check whether the entered student class details are acceptable
     * or not. If not, then display the error message and iterate to the same operation until
     * the details are correctly entered.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 07-05-2023
     * @copyright Copyright (c) 2023
     */
    do
    {
        printf_s("Select the class to enroll: ");
        scanf_s("%d", &student[num_stud].class);
        /**
         * @brief Class type less than 1 and greater than 12 are not accepted. Thus to show
         * a warning and to re-display the input menu for the class, the following
         * 'if' statement is used.
         *
         * @version 0.1
         * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
         * @date 07-05-2023
         * @copyright Copyright (c) 2023
         */
        if (student[num_stud].class < 1 || student[num_stud].class > 12)
            printf_s("\nWrong class selected!!!\nTry again...\n\n");
    } while (student[num_stud].class < 1 || student[num_stud].class > 12);

    printf_s("Do you need hostel facilities? (Any non-zero value = yes | 0 = no) ");
    scanf_s("%d", &student[num_stud].hostel);

    /**
     * @brief Initialize the account of the student according to the rule:
     * (1) if hostel facilities are requested, then hostel account is initialized with 200/-.
     * (2) if hostel facilities are not requested, then college account is initialized with 200/-.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 07-05-2023
     * @copyright Copyright (c) 2023
     */
    if (student[num_stud].hostel == false)
    {
        printf_s("The type of the student is A.\nCollege account initialized with 200/-.\n");

        student[num_stud].college_account = 200.00; // college account initialization
    }
    else
    {
        printf_s("The type of the student is B.\nHostel account initialized with 200/-.\n");

        student[num_stud].hostel_account = 200.00; // hostel account initialization
    }
}

/**
 * @brief The below function is used to ask the user whether he/she wants to display the
 * registered details for each individual student or not. If yes, then the function will
 * display the student details.
 *
 * @version 0.1
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @date 07-05-2023
 * @copyright Copyright (c) 2023
 ****************************************************************************
 * @param num_stud = number of students.
 * @param student = struct datatype object pointer to accept passed struct datatype array.
 */
void display_student(int num_stud, struct college_student *student)
{
    char choice = 'N', newline_buffer; // newline_buffer = to ignore the newline character

    printf_s("\nDo you want to display the saved records? ([Y/y]es or [N/n]o) ");
    choice = getchar();

    /**
     * @brief Construct a new if statement to check the following input:
     * (1) [N/n]o = to explicitly cancel the display_student() function operation;
     * (2) [Y/y]es = to explicitly execute the display_student() function operation; and
     * (3) default (no input) = to implicitly cancel the display_student() function operation.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 07-05-2023
     * @copyright Copyright (c) 2023
     */
    if (choice == 'n' || choice == 'N') // If true, the display operation will be cancelled
    {
        printf_s("\nOperation finished!!!\n");

        newline_buffer = getchar(); // To ignore the newline character after the previous input
    }
    else if (choice == 'y' || choice == 'Y') // If true, the display operation will be carried out
    {
        printf_s("\nStudent name: %s\n", student[num_stud].name);
        printf_s("Student class: %d\n", student[num_stud].class);
        printf_s("Student type: ");

        /**
         * @brief To display the student's appropriate account and initialized balance, this if
         * statement is used to check whether the student needs hostel facility or not like below:
         * (1) hostel = true, then display student type, account type, and hostel account balance; else
         * (2) hostel = false, then display student type, account type, and college account balance.
         *
         * @version 0.1
         * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
         * @date 07-05-2023
         * @copyright Copyright (c) 2023
         */
        if (student[num_stud].hostel == false)
            printf_s("A\nStudent account: college\nInitialized amount: %f/-\n", student[num_stud].college_account);
        else
            printf_s("B\nStudent account: hostel\nInitialized amount: %f/-\n", student[num_stud].hostel_account);

        newline_buffer = getchar(); // To ignore the newline character after the previous input
    }
    else // default behavior
        printf_s("\nDisplay operation skipped!!!\n");
}

int main()
{
    int num_stud = 0, i = 1; // i = student display counter
    char newline_buffer;     // to hold the newline character

    printf_s("How many students do you want to register? ");
    scanf_s("%d", &num_stud);
    newline_buffer = getchar(); // To ignore the newline character after the previous input

    struct college_student student[num_stud]; // Declare an array to hold the given number of students

    /**
     * @brief Construct a new while loop to iterate the number of times equal to that of
     * number of students and call the below functions:
     * (1) register_student() = to enroll new students with required data; and
     * (2) display_student() = to ask to display the student details immediately after registration.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 07-05-2023
     * @copyright Copyright (c) 2023
     */
    while (num_stud)
    {
        /**
         * @brief  Since 'num_stud' = 1 more than the array size (arrays start with index 0),
         * therefore the college_student object array has been decreased by 1 at the beginning
         * of the loop operation in each iteration and passed on to the function which registers
         * the student details.
         *
         * @version 0.1
         * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
         * @date 07-05-2023
         * @copyright Copyright (c) 2023
         */
        register_student(--num_stud, i, student); // Register student details
        printf_s("\nRegistration succeeded!!!\n");

        newline_buffer = getchar(); // To ignore the newline character after the previous input

        display_student(num_stud, student); // Display the student details

        ++i; // To increase the student number by 1 in each iteration
    }
}