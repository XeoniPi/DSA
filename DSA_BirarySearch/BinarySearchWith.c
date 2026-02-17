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

// Explanation:
/*
What the binarySearch function does
Purpose: Efficiently find the index of a target value in a sorted array using divide‑and‑conquer.
How mid is calculated:  
mid = left + (right - left) / 2 avoids potential overflow compared to (left + right) / 2.

How the search narrows:
If arr[mid] == target: Found—return mid.
If arr[mid] < target: Target is in the right half—move left to mid + 1.
Else: Target is in the left half—move right to mid - 1.

When it stops: The loop runs while left <= right. If the target isn’t found, return -1.
What the main function does
Initializes a sorted array: int arr[] = {2, 3, 4, 10, 40};
Calculates length safely: len = sizeof(arr) / sizeof(arr[0])
Sets the target: int target = 10;
Calls the search: BinarySearch(arr, len, target);

Prints the result: If found, prints the index; otherwise, prints a not‑found message.

What the output means
Found case:  
If the target exists in the array, you’ll see:
Element is present at index X  
For the given input, 10 is at index 3 (0‑based indexing).

Not found case:  
If the target isn’t in the array, you’ll see:
Element is not present in array

Time Complexity & Space Complexity:
Binary search requires a sorted array.
Time complexity: O(log n).
Space complexity: O(1) (iterative version).
*/