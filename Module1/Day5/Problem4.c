#include <stdio.h>
#include <stdlib.h>

struct Student {
   char Firstname[50];
   char lastname[50];
   int age;
   float marks;
   int roll_no;
};

int main() {
   int n;

   printf("Enter the number of students: ");
   scanf("%d", &n);

 
   struct Student* students = (struct Student*)malloc(n * sizeof(struct Student));

   if (students == NULL) {
      printf("Memory allocation failed!\n");
      return 1;
   }

   // Read data for each student
   for (int i = 0; i < n; i++) {
      printf("Enter details for student %d:\n", i + 1);

      printf(" FirstName: ");
      scanf("%s", students[i].Firstname);
 printf(" LastName: ");
      scanf("%s", students[i].lastname);

      printf("Age: ");
      scanf("%d", &students[i].age);

      printf("Marks: ");
      scanf("%f", &students[i].marks);

printf("roll_no : ");
scanf("%d",&students[i].roll_no);
      printf("\n");
   }

   printf("Student Details:\n");
   for (int i = 0; i < n; i++) {
      printf("Student %d:\n", i + 1);
      printf("Name: %s", students[i].Firstname);
       printf(" %s\n", students[i].lastname);
      printf("Age: %d\n", students[i].age);
      printf("Marks: %.2f\n", students[i].marks);
         printf("Roll_No: %d\n", students[i].roll_no);
      printf("\n");
   }

   free(students);

   return 0;
}
