#include<iostream>
using namespace std;

int LearnSearch(int arr[], int len, int target){
    for(int i = 0; i < len; i++){
        if (arr[i] == target) return i;
    }
    return -1;
}
int main(){
    int arr[100];
    int len;
    cout << "Enter the length of the array: ";
    cin >> len;
    for(int i = 0; i < len; i++){
        arr[i] = i;
    }
    int target;
    cout << "Enter a targeted Number: ";
    cin >> target;

    int result = LearnSearch(arr, len, target);

    if(result != -1){
        cout << "yes, found at index " << result << endl;

    } else {
        cout << "No, not found" << endl;
    }
}

// Explanation:
/*
Search function: LearnSearch(arr, len, target) iterates through the array and returns the index of the first match; otherwise returns -1.
Main flow: Reads the array length, fills the array, reads the target, calls the search, and prints the result.
Note: The loop that “reads elements” actually assigns arr[i] = i; instead of reading user input. If you intend to read values, replace it with cin >> arr[i]; (see the corrected version below).

1) Input and array setup
Length input:  
cin >> len; reads how many elements will be considered (up to 100).
Array fill:  
The code sets arr[i] = i; for i = 0..len-1, so the array becomes [0, 1, 2, ..., len-1].
Target input:  
cin >> target; reads the value to search for.

2) Linear search logic
Iteration:  
for (int i = 0; i < len; i++) scans each index from 0 to len - 1.
Comparison:  
if (arr[i] == target) checks whether the current element equals the target.
Return on match:  
return i; immediately returns the index of the first match.
Return on no match:  
If the loop finishes without finding the target, return -1;.

3) Result handling:
Found case:  
If result != -1, prints yes, found at index <result>.
Not found case:  
Otherwise prints No, not found.

4) Example run:
Array (with current code): If len = 10, array is [0,1,2,3,4,5,6,7,8,9].
Target: 6
Iteration: Checks indices until arr[6] == 6 → returns 6.
Output: yes, found at index 6

If the target is 15 and len = 10, the function returns -1 and prints No, not found.

5) Complexity and characteristics:
Time complexity:
Worst case: 
𝑂(𝑛)— checks all elements.
Best case: 
𝑂(1)— first element matches.
Space complexity:
𝑂(1) extra space — only loop variables.

Order-agnostic:  
Works on unsorted arrays; no preprocessing required.

First occurrence:  
Returns the first index where the target appears.

*/