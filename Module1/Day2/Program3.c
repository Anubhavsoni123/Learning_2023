#include <stdio.h>

int sum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i += 2) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {11, 12, 13, 14, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int solution = sum(arr, n);

    printf("Sum of alternate elements: %d\n", solution);

    return 0;
}
