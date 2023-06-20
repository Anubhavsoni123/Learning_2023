#include <stdio.h>

#define MAX_STUDENTS 200

struct Student {
   char name[50];
   int marks;
   
};

void readStudents(struct Student students[], int numStudents) {
   printf("Enter student details:\n");
   for (int i = 0; i < numStudents; i++) {
      printf("Student %d:\n", i + 1);
      printf("Name: ");
      scanf("%s", students[i].name);
      printf("Marks: ");
      scanf("%d", &students[i].marks);
   }
}

void writeStudents(struct Student students[], int numStudents) {
   printf("Student details:\n");
   for (int i = 0; i < numStudents; i++) {
      printf("Student %d:\n", i + 1);
      printf("Name: %s\n", students[i].name);
      printf("Marks: %d\n", students[i].marks);
   }
}

float calculateAverage(struct Student students[], int numStudents) {
   int totalMarks = 0;
   for (int i = 0; i < numStudents; i++) {
      totalMarks += students[i].marks;
   }
   return (float)totalMarks / numStudents;
}

void AboveAverage(struct Student students[], int numStudents, float average) {
   printf("Students scoring above average marks:\n");
   for (int i = 0; i < numStudents; i++) {
      if (students[i].marks > average) {
         printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
      }
   }
}

void BelowAverage(struct Student students[], int numStudents, float average) {
   printf("Students scoring below average marks:\n");
   for (int i = 0; i < numStudents; i++) {
      if (students[i].marks < average) {
         printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
      }
   }
}

int main() {
  struct Student students[MAX_STUDENTS];
   int numStudents;

   printf("Enter total no of students: ");
   scanf("%d", &numStudents);

   if (numStudents > MAX_STUDENTS) {
      printf("Maximum number of students exceeded.\n");
      return 1;
   }

   readStudents(students, numStudents);
   printf("\n");

   writeStudents(students, numStudents);
   printf("\n");

   float average = calculateAverage(students, numStudents);
   printf("Average marks: %.2f\n\n", average);

   AboveAverage(students, numStudents, average);
   printf("\n");

   BelowAverage(students, numStudents, average);

   return 0;
}
