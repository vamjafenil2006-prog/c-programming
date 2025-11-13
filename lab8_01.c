#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    char courseName[50];
    char majorSubject[30];
    char minorSubject[30];
};

void printAllStudentNames(struct Student s[], int count) {
    for (int i = 0; i < count; i++) {
        printf("%s\n", s[i].name);
    }
}

void printStudentDataByRollNumber(struct Student s[], int count, int roll) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (s[i].rollNumber == roll) {
            printf("--- Student Data ---\n");
            printf("Roll Number: %d\n", s[i].rollNumber);
            printf("Name: %s\n", s[i].name);
            printf("Course: %s\n", s[i].courseName);
            printf("Major: %s\n", s[i].majorSubject);
            printf("Minor: %s\n", s[i].minorSubject);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student with roll number %d not found.\n", roll);
    }
}

int main() {
    struct Student students[10] = {
        {101, "Alice Smith", "B.Tech", "Computer Science", "Mathematics"},
        {102, "Bob Johnson", "B.Tech", "Mechanical Engineering", "Physics"},
        {103, "Charlie Brown", "B.Sc", "Physics", "Chemistry"},
        {104, "Diana Prince", "B.A", "History", "Sociology"},
        {105, "Ethan Hunt", "M.Sc", "Mathematics", "Statistics"},
        {106, "Fiona Glenn", "B.Tech", "Electrical Engineering", "Electronics"},
        {107, "George Best", "B.Sc", "Chemistry", "Biology"},
        {108, "Hannah Grey", "B.A", "English Literature", "Linguistics"},
        {109, "Ian Wright", "M.Tech", "Computer Science", "Data Structures"},
        {110, "Jill Valentine", "B.Sc", "Biology", "Environmental Science"}
    };
    int totalStudents = 10;
    int searchRoll = 104;

    printf("a) Names of all students:\n");
    printAllStudentNames(students, totalStudents);

    printf("\n---\n");
    printf("b) Data for student with roll number %d:\n", searchRoll);
    printStudentDataByRollNumber(students, totalStudents, searchRoll);

    return 0;
}