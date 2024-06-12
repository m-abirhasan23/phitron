#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int roll;
    char section[10];
    char department[20];
} std1, std2, std3;

int main()
{
    // Assigning string literals to the members of std1
    strcpy(std1.name, "Abir Hasan");
    std1.roll = 12345;
    strcpy(std1.section, "2DCSE");
    strcpy(std1.department, "Computer Science");

    // Printing the name of std1
    printf("%s\n%d", std1.name, std1.roll);

    return 0;
}
