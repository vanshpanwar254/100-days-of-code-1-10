/*
Store employee data in a binary file using fwrite() and read using fread().
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.
Explanation 1:
Demonstrates writing and reading structures using binary file handling functions.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee{
    int id;
    char name[50];
    float salary;
} emp;

int main(){
    FILE *fp;

    // Writing to binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        perror("Unable to open file for writing");
        return 1;
    }

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    fwrite(&emp, sizeof(emp), 1, fp);
    fclose(fp);

    // Reading from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        perror("Unable to open file for reading");
        return 1;
    }

    fread(&emp, sizeof(emp), 1, fp);
    fclose(fp);

    printf("\nEmployee Details:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}
