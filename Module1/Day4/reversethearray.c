#include <stdio.h>

void reversethearray(int n, int arr[]){
    if(n % 2 == 0){
        int i = 0;
        int k= n-1;
        while(i < (n/2)){
            int temp =  arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
            i++;
            k--;
        }
    }
    else{
        int i = 0;
        int k = n-1;
        while(i < (n/2)){
            int temp =  arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
            i++;
            k--;
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int n;
    printf("Enter the size of Array\n");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    reversethearray(n, arr);
    return 0;
}