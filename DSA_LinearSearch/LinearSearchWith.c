#include <stdio.h>

int learnSearch(int arr[], int n, int target) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {   
            return i;             
        }
    }
    return -1; 
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target;
    printf("Enter a targeted number:\t");
    scanf("%d", &target);
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = learnSearch(arr, n, target);  

    if (res != -1) {
        printf("Yes, found at index %d\n", res);
    } else {
        printf("No, not found\n");
    }

    return 0;
}

// Explanation:
/*
1) Function purpose
Goal: Search for target inside arr of length n.
Return value: Index of the first match; -1 if not found.

2) Iteration logic
Loop: for (i = 0; i < n; i++)—checks each element from index 0 to n - 1.
Comparison: if (arr[i] == target)—when true, immediately returns i.
No match: If the loop finishes without finding target, return -1.

3) Main function flow
Array: {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}.
Input: Prompts the user to enter a number; reads it into target.
Length: n = sizeof(arr) / sizeof(arr[0]) → 10.
Search call: res = learnSearch(arr, n, target).

Output:
If res != -1, prints the index where the target was found.
Otherwise, prints “No, not found”.
Example run (user input)
User enters: 9

Iteration:

i = 0 → arr[0] = 1 ≠ 9
i = 1 → arr[1] = 2 ≠ 9
…
i = 8 → arr[8] = 9 = 9 → return 8
Output: Yes, found at index 8

If the user enters 11, the loop completes without a match and returns -1
, printing No, not found.

Complexity and characteristics:

Time complexity:  O(n)
Worst case: checks all elements.
Best case: O(1) if the first element matches.
Space complexity: O(1)

Uses constant extra space (only the loop variable).
Works on unsorted arrays: No sorting required—linear search is order-agnostic.

First occurrence only: If duplicates exist, it returns the first index.

Common edge cases:

Target not present: Returns −1; always check before using the index.
Multiple matches: Only the first index is returned. If you need all matches, you’d collect them separately.
Input validation: If non-integer input is provided, scanf may fail—consider validating input for production code.

*/