#include <stdio.h>
#include <stdlib.h>

struct student
{
    int rno;
    char name[20];
    float m1, m2;
};

struct student *AcceptStudentDetails(int n)
{
    struct student *s = (struct student *)malloc(n * sizeof(struct student));
    // if (s == NULL) // Check if malloc was successful
    // {
    //     printf("Memory allocation failed!\n");
    //     exit(1);
    // }

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for student %d (rno name m1 m2): ", i + 1);
        scanf("%d %s %f %f", &(s + i)->rno, (s + i)->name, &(s + i)->m1, &(s + i)->m2);
    }
    return s;
}

int main()
{
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student *s = AcceptStudentDetails(n);

    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\t%.2f\n", (s + i)->rno, (s + i)->name, (s + i)->m1, (s + i)->m2);
    }

    free(s); // Free the allocated memory
    return 0;
}
