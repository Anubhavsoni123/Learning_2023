#include <stdio.h>
int min(int n, int arr[]){
    int small = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < small){
            small = arr[i];
        }
    }
    return small;
}
int max(int n, int arr[]){
    int large = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > large){
            large = arr[i];
        }
    }
    return large;
}
int main(){
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int small = min(n, arr);
    int large = max(n, arr);
    printf("Minimum is %d\n", small);
    printf("Maximum is %d", large);
}