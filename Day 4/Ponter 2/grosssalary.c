#include <stdio.h>
#include <string.h>

struct Employee {
    int empno;
    char name[18];
    double salary;
};

// Function to display employee details
void display(struct Employee e) {
    printf("Employee No: %d\n", e.empno);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2lf\n", e.salary);
}

// Function to calculate gross salary
double calculateGrossSalary(double salary) {
    double grossSalary = salary + (salary * 0.10); // Example: Adding 10% as bonus
    return grossSalary;
}

int main() {
    struct Employee e;

    e.empno = 1001;
    strcpy(e.name, "Aftab");
    e.salary = 200000000;

    // Display employee details
    display(e);

    // Calculate and display gross salary
    double grossSalary = calculateGrossSalary(e.salary);
    printf("Gross Salary: %.2lf\n", grossSalary);

    return 0;
}
