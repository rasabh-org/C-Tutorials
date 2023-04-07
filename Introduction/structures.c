/**
 * @file structures.c
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief C Implementation of structures and structure variables.
 * @version 0.1
 * @date 07-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>

/**
 * @brief Structure declaration and definition will be placed here.
 *
 * @return int
 * @version 0.1
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @date 07-04-2023
 * @copyright Copyright (c) 2023
 */

struct student
{
    int roll_no;
    char first_name[20], last_name[20];
    char grade;
    float score;
    // Global structure variables s1, s2.
} s1;

// Function to calculate the grade from the score.
char grade(float score)
{
    if (score >= 85)
        return 'A';
    else if (score >= 65)
        return 'B';
    else if (score >= 45)
        return 'C';
    else if (score >= 30)
        return 'D';
    else
        return 'F';
}

int main()
{
    // Local structure variable s2
    struct student s2;

    /**
     * @brief Input values into global structure variable data members and display them.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 07-04-2023
     * @copyright Copyright (c) 2023
     */
    printf_s("Enter student first name, last name, roll number, and score: ");
    gets_s(s1.first_name, sizeof(s1.first_name));
    gets_s(s1.last_name, sizeof(s1.last_name));
    scanf_s("%d %f", &s1.roll_no, &s1.score);
    s1.grade = grade(s1.score);

    printf_s("Student 1 Details:\n");
    printf_s("\nFull name = %s %s\n", s1.first_name, s1.last_name);
    printf_s("\nRoll number = %d\n", s1.roll_no);
    printf_s("\nScore = %f\n", s1.score);
    printf_s("\nGrade = %c\n", s1.grade);

    /**
     * @brief Input values into local structure variable data members and display them.
     *
     * @version 0.1
     * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
     * @date 07-04-2023
     * @copyright Copyright (c) 2023
     */
    printf_s("\nEnter student first name, last name, roll number, and score: ");
    int eof = getchar();
    gets_s(s2.first_name, sizeof(s2.first_name));
    gets_s(s2.last_name, sizeof(s2.last_name));
    scanf_s("%d %f", &s2.roll_no, &s2.score);
    s2.grade = grade(s2.score);

    printf_s("Student 2 Details:\n");
    printf_s("\nFull name = %s %s\n", s2.first_name, s2.last_name);
    printf_s("\nRoll number = %d\n", s2.roll_no);
    printf_s("\nScore = %f\n", s2.score);
    printf_s("\nGrade = %c\n", s2.grade);
}