#include <stdio.h>
#include <string.h>

struct Employee
{
    int employno;
    char *name;
    double salary;
};
// union Emplo
// {
//     int employno;
//     char name[22];
//     double salary;
// };

// int main()
// {
//     printf("%ld", sizeof(struct Employee)); // Size of the structure
//     printf("\n%ld", sizeof(union Emplo));   // Size of the union
//     return 0;
// }

int main()
{
    struct Employee e;
    printf("%ld ", sizeof(e));
    e.employno = 1001;
    strcpy(e.name, "Aftab");
    e.salary = 200000000;
    printf("%ld ", sizeof(e));

    printf("Employee No: %d \nName:%s  \nsalary:%lf", e.employno, e.name, e.salary);

    return 0;
}
