import random
class BinarySearch:
    def Solve(self, arr, target):
        left = 0
        right = len(arr) - 1
        
        while left <= right:
            mid = left + (right - left) // 2
            if arr[mid] == target:
                return mid
            elif arr[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        return -1

if __name__ == "__main__":
    bs = BinarySearch()
    arr = []
    for x in range(random.randint(5, 100)):
        arr.append(random.randint(1, 990))
    arr = sorted(list(set(arr)))
    print("Array:", arr)
    target = int(input("Enter the target value to search: "))
    result = bs.Solve(arr, target)
    
    if result != -1:
        print(f"Target {target} found at index: {result}")
    else:
        print(f"Target {target} not found in the array.")
        

'''
# Explanation:

This Python program demonstrates binary search in a clear, step by step way.

First, the program imports the random module. This is used to generate a random list of integers so that the search can be tested on different data each time.

Next, a class called BinarySearch is defined. Inside it, the method Solve takes two arguments: a sorted list called arr and a target value. Two pointers, left and right, are set to the start and end of the list. While left is less than or equal to right, the program calculates the middle index mid. If the element at mid equals the target, the method returns mid. If the element at mid is smaller than the target, the search continues in the right half by moving left to mid plus one. Otherwise, the search continues in the left half by moving right to mid minus one. If the loop finishes without finding the target, the method returns -1.

In the main section, an instance of BinarySearch is created. An empty list arr is built by appending random integers between 1 and 990. The number of elements is also random, between 5 and 100. The list is then converted to a set to remove duplicates, and sorted to make it suitable for binary search. The sorted array is printed.

The user is asked to enter a target value. The Solve method is called with the array and the target. If the result is not -1, the program prints that the target was found at the given index. Otherwise, it prints that the target was not found.

The output shows the random array, then either the index of the target if it exists, or a message that it is not present. This demonstrates how binary search works efficiently on sorted data, with time complexity O(log n) and constant space usage.
'''