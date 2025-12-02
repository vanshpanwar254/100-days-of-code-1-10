/*
Define a structure Student with name, roll_no, and marks, then read and print one student's data.
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90
Explanation 1:
The program stores and displays one student's details using structure members.
*/
#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int roll_no;
    int marks;
};
int main() {
    struct Student student;

    // Reading student details
    printf("Enter Name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = 0; // Remove newline character

    printf("Enter Roll: ");
    scanf("%d", &student.roll_no);

    printf("Enter Marks: ");
    scanf("%d", &student.marks);

    // Printing student details
    printf("Name: %s | Roll: %d | Marks: %d\n", student.name, student.roll_no, student.marks);

    return 0;
}
