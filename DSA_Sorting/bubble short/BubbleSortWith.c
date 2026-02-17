#include<stdio.h>

void BubbleSort(int arr[], int n){
    int i, j, temp;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[10] = {65,4,2,9,8,5,3,455,45,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, n);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}