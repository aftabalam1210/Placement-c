#include <stdio.h>
#include <stdlib.h>

struct student
{
    int rollno;
    char name[100]; // Allocate fixed size array for name
    float m1, m2;
};

int main()
{
    struct student *str;
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Allocate memory for n students
    str = (struct student *)malloc(n * sizeof(struct student));

    if (str == NULL)
    {
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }

    for (int i = 0; i < n; i++)
    {
        // Prompt for input
        printf("Enter roll number, name, and two marks for student %d: ", i + 1);
        scanf("%d %s %f %f", &(str[i].rollno), str[i].name, &(str[i].m1), &(str[i].m2));
    }

    // Print the student details
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Roll No: %d, Name: %s, Marks 1: %.2f, Marks 2: %.2f\n", str[i].rollno, str[i].name, str[i].m1, str[i].m2);
    }

    // Free allocated memory
    free(str);

    return 0;
}
