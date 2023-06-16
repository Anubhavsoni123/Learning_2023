#include <stdio.h>

int findLargestNumber(int num) {
    int maxNum = 0;
    
    // Convert the number to an array of digits
    int digits[4];
    digits[0] = num / 1000;    // Thousands digit
    digits[1] = (num / 100) % 10;   // Hundreds digit
    digits[2] = (num / 10) % 10;    // Tens digit
    digits[3] = num % 10;   // Units digit
    
    // Loop through each digit and find the largest number by excluding it
    for (int i = 0; i < 4; i++) {
        int currentNum = 0;
        int multiplier = 1000;
        
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                currentNum += digits[j] * multiplier;
                multiplier /= 10;
            }
        }
        
        if (currentNum > maxNum) {
            maxNum = currentNum;
        }
    }
    
    return maxNum;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    
    int largestNum = findLargestNumber(num);
    printf("Largest number by deleting a single digit: %d\n", largestNum);
    
    return 0;
}
