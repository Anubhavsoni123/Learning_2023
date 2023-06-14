#include <stdio.h>

int SetBits(unsigned int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int totalSetBits(unsigned int arr[], int size) {
    int totalBits = 0;
    for (int i = 0; i < size; i++) {
        totalBits += SetBits(arr[i]);
    }
    return totalBits;
}

int main() {
    unsigned int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = totalSetBits(arr, size);

    printf("Total number of set bits is are : %d\n", result);

    return 0;
}
