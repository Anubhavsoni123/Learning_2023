#include <stdio.h>

void printBits(int num) {
    unsigned int mask = 1 << 31; // Initialize the mask with the leftmost bit
    
    for (int i = 0; i < 32; i++) {
        if (num & mask) {
            printf("1");
        } else {
            printf("0");
        }
        
        mask >>= 1; // Shift the mask one position to the right
    }
    
    printf("\n");
}

int main() {
    int num;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);
    
    printf("Binary representation: ");
    printBits(num);
    
    return 0;
}
