#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store student information
struct student
{
    int id;
    char name[50];
    int age;
    char gender[10];
    char address[100];
};

// Function prototypes
void addStudent(struct student s);
void deleteStudent(struct student s);
void searchStudent(struct student s);
void displayStudents(struct student s);

int main()
{
    int choice;
    struct student s[50];
    while (1)
    {
        printf("\nStudent Database Management System\n");
        printf("1. Add Student\n");
        printf("2. Delete Student\n");
        printf("3. Search Student\n");
        printf("4. Display All Students\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addStudent(s);
            break;
        case 2:
            deleteStudent(s);
            break;
        case 3:
            searchStudent(s);
            break;
        case 4:
            displayStudents(s);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}

// Function to add student information
void addStudent(struct student s)
{
    int i;
    for (i = 0; i < 50; i++)
    {
        if (si.id == 0)
        {
            printf("Enter student id: ");
            scanf("%d", &si.id);
            printf("Enter student name: ");
            scanf("%s", si.name);
            printf("Enter student age: ");
            scanf("%d", &si.age);
            printf("Enter student gender: ");
            scanf("%s", si.gender);
            printf("Enter student address: ");
            scanf("%s", si.address);
            printf("Student added successfully\n");
            break;
        }
    }
    if (i == 50)
    {
        printf("Database is full\n");
    }
}

// Function to delete student information
void deleteStudent(struct student s)
{
    int id, i, flag = 0;
    printf("Enter student id to delete: ");
    scanf("%d", &id);
    for (i = 0; i < 50; i++)
    {
        if (si.id == id)
        {
            flag = 1;
            si.id = 0;
            strcpy(si.name, "");
            si.age = 0;
            strcpy(si.gender, "");
            strcpy(si.address, "");
            printf("Student deleted successfully\n");
            break;
        }
    }
    if (flag == 0)
    {
        printf("Student not found\n");
    }
}

// Function to search student information
void searchStudent(struct student s)
{
    int id, i, flag = 0;
    printf("Enter student id to search: ");
    scanf("%d", &id);
    for (i = 0; i < 50; i++)
    {
        if (si.id == id)
        {
            flag = 1;
            printf("Student id: %d\n", si.id);
            printf("Student name: %s\n", si.name);
            printf("Student age: %d\n", si.age);
            printf("Student gender: %s\n", si.gender);
            printf("Student address: %s\n", si.address);
            break;
        }
    }
    if (flag == 0)
    {
        printf("Student not found\n");
    }
}

// Function to display all student information
void displayStudents(struct student s)
{
    int i;
    printf("\nStudent Information\n");
    for (i = 0; i < 50; i++)
    {
        if (si.id != 0)
        {
            printf("Student id: %d\n", si.id);
            printf("Student name: %s\n", si.name);
            printf("Student age: %d\n", si.age);
            printf("Student gender: %s\n", si.gender);
            printf("Student address: %s\n", si.address);
            printf("\n");
        }
    }
}