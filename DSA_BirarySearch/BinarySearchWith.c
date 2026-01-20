#include<stdio.h>

int BinarySearch(int arr[], int len, int target){
    int left, right, mid;
    left = 0;
    right = len -1;

    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if(arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
    
}

int main(){
    int arr[] = {2, 3, 4, 10, 40};
    int len = sizeof(arr)/sizeof(arr[0]);
    int target = 10;
    int result = BinarySearch(arr, len, target);
    if(result != -1)
        printf("Element is present at index %d\n", result);
    else
        printf("Element is not present in array\n");
    return 0;
}