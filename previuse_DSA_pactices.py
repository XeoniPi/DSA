# class LinearSearch:
#     def solve(arr,target):
#         for i in range(len(arr)):
#             if(arr[i] == target):
#                 return i
#         return -1


# if __name__ == "__main__":
#     arr = [1,2,3,4,5,6,7,8,9]
#     target = 5
#     print(LinearSearch.solve(arr,target))

# class BinarySearch:
#     def solve(arr, target):
#         left = 0
#         right= len(arr) - 1
#         while left <= right:
#             mid = left + (right - left) // 2
#             if arr[mid] == target:
#                 return mid
#             elif arr[mid] < target:
#                 left = mid + 1
#             else:
#                 right = mid - 1
#         return -1
    
# if __name__ == "__main__":
#     arr = [1,2,3,4,5,6,7,8,9]
#     target = 8
#     print(BinarySearch.solve(arr,target))

# Bubble Sort
class BubbleSort:
    def solve(arr):
        n = len(arr)
        for i in range(n):
            for j in range(0, n-i-1):
                if arr[j] > arr[j+1]:
                    temp = arr[j]
                    arr[j] = arr[j+1]
                    arr[j+1] = temp

if __name__ == "__main__":
    arr = [64, 34, 25, 12, 22, 11, 90]
    BubbleSort.solve(arr)
    print("Sorted array is:", arr)
    
