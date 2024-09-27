#include <stdio.h>
#include <string.h>

// union test2
// {
//     int employ;
//     char *ch;
//     long double x;
// };

struct employee
{
    int rollno;
    char *name;
    long double sal;
};

int main()
{
    struct employee e[2];

    // Assigning values
    e[0].rollno = 1;
    e[0].name = "Peta"; 
    e[0].sal = 400000000;

    e[1].rollno = 2;
    e[1].name = "Hero"; 
    e[1].sal = 400000000;

    
    for (int i = 0; i < 2; i++)
    {
        printf("Employee %d:\n", i + 1);
        printf("Roll No: %d\n", e[i].rollno);
        printf("Name: %s\n", e[i].name);
        printf("Salary: %.2Lf\n\n", e[i].sal);
    }

    return 0;
}