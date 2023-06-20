#include <stdio.h>
#include <stdlib.h>

struct Employee {
   char name[50];
   int age;
};

struct Employee* modifyEmployee(struct Employee* employee) {
   printf("Enter employee name: ");
   scanf("%s", employee->name);

   printf("Enter employee age: ");
   scanf("%d", &employee->age);

   return employee;
}

int main() {
   struct Employee* employeePtr;

   
   employeePtr = (struct Employee*)malloc(sizeof(struct Employee));

   if (employeePtr == NULL) {
      printf("Memory allocation failed.\n");
      return 1;
   }

  
   employeePtr = modifyEmployee(employeePtr);

   
   printf("\nModified Employee details:\n");
   printf("Name: %s\n", employeePtr->name);
   printf("Age: %d\n", employeePtr->age);

   free(employeePtr);

   return 0;
}
