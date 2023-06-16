#include <stdio.h>

void findSmallestAndLargestDigits(int num) {
    int smallestDigit = 9;
    int largestDigit = 0;
    
    // Find the smallest and largest digits in the number
    while (num > 0) {
        int digit = num % 10;
        
        if (digit < smallestDigit) {
            smallestDigit = digit;
        }
        
        if (digit > largestDigit) {
            largestDigit = digit;
        }
        
        num /= 10;
    }
    
    // Check if the smallest and largest digits are valid
    if (smallestDigit == 9 || largestDigit == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallestDigit);
        printf("Largest Digit: %d\n", largestDigit);
    }
}

int main() {
    int n1 = 8;
    int n2 = 156;
    int n3 = 123450;
    
    findSmallestAndLargestDigits(n1);
    findSmallestAndLargestDigits(n2);
    findSmallestAndLargestDigits(n3);
    
    return 0;
}
