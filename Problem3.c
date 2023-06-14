
#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float physicsMarks;
    float mathMarks;
    float chemistryMarks;
};

void readStudentDetails(struct Student* student) {
    printf("Enter Roll No: ");
    scanf("%d", &(student->rollNo));

    printf("Enter Name: ");
    scanf(" %[^\n]s", student->name);

    printf("Enter Marks in Physics: ");
    scanf("%f", &(student->physicsMarks));

    printf("Enter Marks in Math: ");
    scanf("%f", &(student->mathMarks));

    printf("Enter Marks in Chemistry: ");
    scanf("%f", &(student->chemistryMarks));
}

void calculateStudentSummary(struct Student student) {
    float totalMarks = student.physicsMarks + student.mathMarks + student.chemistryMarks;
    float percentage = (totalMarks / 300) * 100;

    printf("\n------ Student Summary ------\n");
    printf("Roll No: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Marks in Physics: %.2f\n", student.physicsMarks);
    printf("Marks in Math: %.2f\n", student.mathMarks);
    printf("Marks in Chemistry: %.2f\n", student.chemistryMarks);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
}

int main() {
    struct Student student;

    readStudentDetails(&student);
    calculateStudentSummary(student);

    return 0;
}
