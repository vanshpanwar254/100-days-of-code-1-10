#include <stdio.h>
#include <string.h>


struct Student {
    char name[50];
    int roll;
    int marks;
};


int areIdentical(struct Student s1, struct Student s2) {
    if (strcmp(s1.name, s2.name) == 0 && s1.roll == s2.roll && s1.marks == s2.marks) {
        return 1; // Identical
    } else {
        return 0; // Not identical
    }
}

int main() {
    struct Student s1, s2;

    // Input first struct
    printf("Enter name, roll, marks for student 1: ");
    scanf("%s %d %d", s1.name, &s1.roll, &s1.marks);

    // Input second struct
    printf("Enter name, roll, marks for student 2: ");
    scanf("%s %d %d", s2.name, &s2.roll, &s2.marks);

    // Compare
    if (areIdentical(s1, s2)) {
        printf("The two students are identical.\n");
    } else {
        printf("The two students are NOT identical.\n");
    }

    return 0;
}
