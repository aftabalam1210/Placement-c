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
    scanf("%d", &n);

    // Allocate memory for n students
    str = (struct student *)malloc(n * sizeof(struct student));

    for (int i = 0; i < n; i++)
    {
        // Use & to read values into the fields of the struct
        scanf("%d %s %f %f", &(str + i)->rollno, (str + i)->name, &(str + i)->m1, &(str + i)->m2);
    }

    // Print the student details
    for (int i = 0; i < n; i++)
    {
        printf("%d %s %f %f", &(str + i)->rollno, (str + i)->name, &(str + i)->m1, &(str + i)->m2);
    }

    // Free allocated memory
    free(str);

    return 0;
}
