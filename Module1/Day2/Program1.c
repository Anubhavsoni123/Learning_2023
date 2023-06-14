#include <stdio.h>

void printExponent(double x) {
    unsigned long long exponent = (*(unsigned long long*)&x & 0x7FF0000000000000) >> 52;
    

    printf("Exponent in hex format: 0x%llX\n", exponent);
    
    
    printf("Exponent in binary format: 0b");
    
    
    for (int i = 11; i >= 0; i--) {
        unsigned long long bit = (exponent >> i) & 1;
        printf("%llu", bit);
    }
    
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);
    return 0;
}
