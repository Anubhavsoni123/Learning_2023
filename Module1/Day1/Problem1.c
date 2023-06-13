#include <stdio.h>


// using  If-else 
int findthebiggestOfTwo1(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
} 

// Using Ternary operator 

int findthebiggestOfTwo2(int num1,int num2){
    return(num1>num2)?num1:num2;
}

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    int biggest1 = findthebiggestOfTwo1(a, b);
    printf("The biggest number using if -else : %d\n", biggest1);
    int biggest2=findthebiggestOfTwo2(a,b);
    printf("The biggest number using  ternary operator  :%d\n",biggest2);

    return 0;
}
