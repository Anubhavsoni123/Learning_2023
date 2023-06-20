#include <stdio.h>

struct Employee {
   char name[50];
   int age;
   float salary;
};

void swapFields(struct Employee* e1, struct Employee* e2) {
   char tempName[50];
   strcpy(tempName, e1->name);
   strcpy(e1->name, e2->name);
   strcpy(e2->name, tempName);


   int tempAge = e1->age;
   e1->age = e2->age;
   e2->age = tempAge;
   float tempSalary = e1->salary;
   e1->salary = e2->salary;
   e2->salary = tempSalary;
}

int main() {
   struct Employee employee1 = { "Anubhav", 25, 85000.5 };
   struct Employee employee2 = { "Soniya", 23, 90000.0 };

   printf("Before swapping:\n");
   printf("Employee 1: Name=%s, Age=%d, Salary=%.2f\n", employee1.name, employee1.age, employee1.salary);
   printf("Employee 2: Name=%s, Age=%d, Salary=%.2f\n", employee2.name, employee2.age, employee2.salary);
   swapFields(&employee1, &employee2);

   printf("\nAfter swapping:\n");
   printf("Employee 1: Name=%s, Age=%d,Salary=%.2f\n", employee1.name, employee1.age, employee1.salary);
   printf("Employee 2: Name=%s, Age=%d, Salary=%.2f\n", employee2.name, employee2.age, employee2.salary);

   return 0;
}
