#include <stdio.h>

struct student_data {
    int rollNo;
    char name[50];
    int marksPhysics;
    int marksMaths;
    int marksChemistry;
    int total;
};

int main() {
    struct student_data student1;

    printf("Enter Roll Number: ");
    scanf("%d", &student1.rollNo);

    printf("Enter Name: ");
    scanf("%s", student1.name);

    printf("Enter Marks for Physics: ");
    scanf("%d", &student1.marksPhysics);

    printf("Enter Marks for Maths: ");
    scanf("%d", &student1.marksMaths);

    printf("Enter Marks for Chemistry: ");
    scanf("%d", &student1.marksChemistry);

    student1.total = student1.marksPhysics + student1.marksMaths + student1.marksChemistry;

    printf("\n--- Student Information ---\n");
    printf("Roll No.: %d\n", student1.rollNo);
    printf("Name: %s\n", student1.name);
    printf("Physics Marks: %d\n", student1.marksPhysics);
    printf("Maths Marks: %d\n", student1.marksMaths);
    printf("Chemistry Marks: %d\n", student1.marksChemistry);
    printf("Total Marks: %d\n", student1.total);

    return 0;
}