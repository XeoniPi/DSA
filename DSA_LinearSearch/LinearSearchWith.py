class LinearSearch:
    def Solve(self, arr, target):
        for index in range(len(arr)):
            if arr[index] == target:
                return index
        
        return -1
    
if __name__ == "__main__":
    searching = LinearSearch()
    n = int(input("Enter number of elements in the array: "))
    arr = []
    for i in range(n):
        arr.append(i+1)
    target = int(input("Enter the target value to search for: "))
    result = searching.Solve(arr, target)
    
    if result != -1:
        print(f"Element found at index: {result}")
    else:
        print("Element not found in the array.")



# Explanation:
'''
Class & method: LinearSearch.Solve(arr, target) performs the search and returns the index or -1.
Main block: Builds a sequential array [1, 2, ..., n], reads target from input, calls Solve, and prints the result.

1). Input and array construction:
Read size: n = int(input(...))—the number of elements.
Build array:
Starts with an empty list arr = [].
Appends i+1 for i in range(n), resulting in [1, 2, 3, ..., n].

Read target: target = int(input(...)).

2). Linear search logic
Iterate indices:
for index in range(len(arr)): loops from 0 to len(arr) - 1.
Compare each element:
if arr[index] == target: checks whether the current element matches the target.
Return on match:
return index immediately returns the index of the first match.
Return on no match:
If the loop completes without finding the target, return -1.

3). Output handling
Found case:
If result != -1, prints Element found at index: {result}.

Not found case:
Otherwise prints Element not found in the array.

4). Example run:
Input:
n = 10 → array becomes [1,2,3,4,5,6,7,8,9,10]
target = 7

Iteration:
Checks indices 0..6 until arr[6] == 7 → returns 6.

Output:
Element found at index: 6
If target = 11, the loop finishes without a match and returns -1, printing “Element not found in the array.”


5). Complexity and characteristics:
Time complexity:  
O(n) in the worst case—every element may need to be checked.
O(1) in the best case—if the first element matches.

Space complexity:  
O(1) extra space—only the loop variable is used (excluding the input array).

Order-agnostic:  
Works on unsorted arrays; no preprocessing required.

First occurrence:  
Returns the first index where the target appears.
'''