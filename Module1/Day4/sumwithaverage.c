#include <stdio.h>

void calculateSumAndAverage(int array[], int size, int* sum, float* average) {
    int i;

    *sum = 0; // Initialize the sum to 0

    // Calculate the sum of array elements
    for (i = 0; i < size; i++) {
        *sum += array[i];
    }

    // Calculate the average
    *average = (float)(*sum) / size;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int sum;
    float average;

    calculateSumAndAverage(array, size, &sum, &average);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
