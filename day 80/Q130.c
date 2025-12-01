#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 100

// Structure to store student data
struct Student
{
    char name[MAX_NAME_LENGTH];
    int rollNumber;
    int marks;
};

void writeToFile(FILE *file, struct Student students[], int n)
{
    for (int i = 0; i < n; i++)
    {
        fprintf(file, "%s %d %d\n", students[i].name, students[i].rollNumber, students[i].marks);
    }
}

void readFromFile(FILE *file)
{
    struct Student student;
    while (fscanf(file, "%s %d %d", student.name, &student.rollNumber, &student.marks) != EOF)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n", student.name, student.rollNumber, student.marks);
    }
}

int main()
{
    FILE *file = fopen("students.txt", "w+"); // Open file for writing and reading
    if (file == NULL)
    {
        printf("Could not open file for writing.\n");
        return 1;
    }

    // Create an array of students
    struct Student students[] = {
        {"Asha", 101, 85},
        {"Ravi", 102, 92}};

    int numberOfStudents = sizeof(students) / sizeof(students[0]);

    // Write student data to file
    writeToFile(file, students, numberOfStudents);

    // Go back to the beginning of the file to read
    rewind(file);

    // Read student data from file and display
    printf("Student Records from File:\n");
    readFromFile(file);

    // Close the file
    fclose(file);

    return 0;
}
