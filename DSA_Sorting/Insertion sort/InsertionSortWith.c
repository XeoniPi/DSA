#include<stdio.h>
void Insertion_Sort(int arr[], int n){
    int i,j, item;
    for(i = 0; i < n; i++){
        item = arr[i];

        j = i -1;
        while(j >= 0 && arr[j] > item){
            arr[j+1] = arr[j];
            j = j -1;
        }
        arr[j+1] = item;
    }
}

int main(){
    int arr[6] = {5,7,8,4,6,2};
    int n = sizeof(arr) /sizeof(arr[0]);

    Insertion_Sort(arr, n);
        for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
