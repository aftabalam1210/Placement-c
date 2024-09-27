#include <stdio.h>
#include <stdlib.h>

struct student
{
    int rollno;
    char name[100]; // Allocate fixed size array for name
    float m1, m2;
};

// Function prototypes
void inputStudents(struct student *students, int n);
void displayStudents(const struct student *students, int n);
void calculateTotalAndAverage(const struct student *students, int n);

int main()
{
    struct student *str;
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Allocate memory for n students
    str = (struct student *)malloc(n * sizeof(struct student));

    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }

    // Input student details
    inputStudents(str, n);

    // Display student details
    displayStudents(str, n);

    // Calculate and display total and average marks
    calculateTotalAndAverage(str, n);

    // Free allocated memory
    free(str);

    return 0;
}

// Function to input student details
void inputStudents(struct student *students, int n)
{
    for (int i = 0; i < n; i++)
    {
        // Prompt for input
        printf("Enter roll number, name, and two marks for student %d: ", i + 1);
        scanf("%d %s %f %f", &students[i].rollno, students[i].name, &students[i].m1, &students[i].m2);
    }
}

// Function to display student details
void displayStudents(const struct student *students, int n)
{
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Roll No: %d, Name: %s, Marks 1: %.2f, Marks 2: %.2f\n", 
               students[i].rollno, students[i].name, students[i].m1, students[i].m2);
    }
}

// Function to calculate and display total and average marks
void calculateTotalAndAverage(const struct student *students, int n)
{
    printf("\nTotal and Average Marks:\n");
    for (int i = 0; i < n; i++)
    {
        float total = students[i].m1 + students[i].m2;
        float average = total / 2; // Assuming there are two marks
        printf("Roll No: %d, Name: %s, Total Marks: %.2f, Average Marks: %.2f\n", 
               students[i].rollno, students[i].name, total, average);
    }
}
